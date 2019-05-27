#include <lmic.h>
#include <hal/hal.h>
#include <SPI.h>
#include <U8g2lib.h>


// LoRa Pins
#define LoRa_RST  14  // GPIO 14
#define LoRa_CS   18  // GPIO 18
#define LoRa_DIO0 26  // GPIO 26
#define LoRa_DIO1 33  // GPIO 33
#define LoRa_DIO2 32  // GPIO 32

int runmode = 0;

// assume 4x6 font, define width and height
#define U8LOG_WIDTH 32
#define U8LOG_HEIGHT 10


// This EUI must be in little-endian format, so least-significant-byte
// first. When copying an EUI from ttnctl output, this means to reverse
// the bytes. For TTN issued EUIs the last bytes should be 0xD5, 0xB3,
// 0x70.
static const u1_t PROGMEM APPEUI[8]={ 0x4B, 0xCC, 0x01, 0xD0, 0x7E, 0xD5, 0xB3, 0x70  };
void os_getArtEui (u1_t* buf) { memcpy_P(buf, APPEUI, 8);}

// This should also be in little endian format, see above.
static const u1_t PROGMEM DEVEUI[8]={ 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDE  };
void os_getDevEui (u1_t* buf) { memcpy_P(buf, DEVEUI, 8);}

// This key should be in big endian format (or, since it is not really a
// number but a block of memory, endianness does not really apply). In
// practice, a key taken from ttnctl can be copied as-is.
static const u1_t PROGMEM APPKEY[16] = { 0x01, 0x11, 0x2D, 0x27, 0x16, 0x37, 0x7C, 0x53, 0xA3, 0xF6, 0x1C, 0x1F, 0x46, 0xD3, 0x48, 0x0C };
void os_getDevKey (u1_t* buf) {  memcpy_P(buf, APPKEY, 16);}

static uint8_t mydata[] = "Hello, world!";
static osjob_t sendjob;

// Schedule TX every this many seconds (might become longer due to duty
// cycle limitations).
const unsigned TX_INTERVAL = 60;




// Pin mapping
const lmic_pinmap lmic_pins = {
    .nss = LoRa_CS,
    .rxtx = LMIC_UNUSED_PIN,
    .rst = LoRa_RST,
    .dio = { LoRa_DIO0, LoRa_DIO1, LoRa_DIO2 },
};


//Display
//Pin 4 = SDA (ist nicht der Standard-I2C-Port vom ESP32)
//Pin 15 = SCL (ist nicht der Standard-I2C-Port vom ESP32)
//Pin 16 = RST (muss bei Start kurz auf Low, dann auf High gesetzt werden)


U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ 15, /* data=*/ 4, /* reset=*/ 16);
//U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* clock=*/ SCL, /* data=*/ SDA);   // ESP32 Thing, HW I2C with pin remapping

// allocate memory
uint8_t u8log_buffer[U8LOG_WIDTH * U8LOG_HEIGHT];
// Create a U8g2log object
U8G2LOG u8g2log;

void log_display(String s)
{
  Serial.println(s);
  if (runmode < 1)
  {
    u8g2log.print(s);
    u8g2log.print("\n");
  }
}

void onEvent (ev_t ev) {
    Serial.print(os_getTime());
    Serial.print(": ");
    switch(ev) {
        case EV_SCAN_TIMEOUT:
            Serial.println(F("EV_SCAN_TIMEOUT"));
            log_display("Timeout");
            break;
        case EV_BEACON_FOUND:
            Serial.println(F("EV_BEACON_FOUND"));
            log_display("Beacon found");
            break;
        case EV_BEACON_MISSED:
            Serial.println(F("EV_BEACON_MISSED"));
            break;
        case EV_BEACON_TRACKED:
            Serial.println(F("EV_BEACON_TRACKED"));
            break;
        case EV_JOINING:
            Serial.println(F("EV_JOINING"));
            log_display("Joining...");
            break;
        case EV_JOINED:
            Serial.println(F("EV_JOINED"));
            {
              u4_t netid = 0;
              devaddr_t devaddr = 0;
              u1_t nwkKey[16];
              u1_t artKey[16];
              LMIC_getSessionKeys(&netid, &devaddr, nwkKey, artKey);
              log_display("connected");
              Serial.print("netid: ");
              Serial.println(netid, DEC);
              Serial.print("devaddr: ");
              Serial.println(devaddr, HEX);
              Serial.print("artKey: ");
              for (int i=0; i<sizeof(artKey); ++i) {
                Serial.print(artKey[i], HEX);
              }
              Serial.println("");
              Serial.print("nwkKey: ");
              for (int i=0; i<sizeof(nwkKey); ++i) {
                Serial.print(nwkKey[i], HEX);
              }
              Serial.println("");
            }
            // Disable link check validation (automatically enabled
            // during join, but because slow data rates change max TX
	    // size, we don't use it in this example.
            LMIC_setLinkCheckMode(0);
            break;
        /*
        || This event is defined but not used in the code. No
        || point in wasting codespace on it.
        ||
        || case EV_RFU1:
        ||     Serial.println(F("EV_RFU1"));
        ||     break;
        */
        case EV_JOIN_FAILED:
            Serial.println(F("EV_JOIN_FAILED"));
            break;
        case EV_REJOIN_FAILED:
            Serial.println(F("EV_REJOIN_FAILED"));
            break;
        case EV_TXCOMPLETE:
            Serial.println(F("EV_TXCOMPLETE (includes waiting for RX windows)"));
            if (LMIC.txrxFlags & TXRX_ACK)
              Serial.println(F("Received ack"));
            if (LMIC.dataLen) {
              Serial.print(F("Received "));
              Serial.print(LMIC.dataLen);
              Serial.println(F(" bytes of payload"));
            }
            // Schedule next transmission
            os_setTimedCallback(&sendjob, os_getTime()+sec2osticks(TX_INTERVAL), do_send);
            break;
        case EV_LOST_TSYNC:
            Serial.println(F("EV_LOST_TSYNC"));
            break;
        case EV_RESET:
            Serial.println(F("EV_RESET"));
            break;
        case EV_RXCOMPLETE:
            // data received in ping slot
            Serial.println(F("EV_RXCOMPLETE"));
            break;
        case EV_LINK_DEAD:
            Serial.println(F("EV_LINK_DEAD"));
            break;
        case EV_LINK_ALIVE:
            Serial.println(F("EV_LINK_ALIVE"));
            break;
        /*
        || This event is defined but not used in the code. No
        || point in wasting codespace on it.
        ||
        || case EV_SCAN_FOUND:
        ||    Serial.println(F("EV_SCAN_FOUND"));
        ||    break;
        */
        case EV_TXSTART:
            Serial.println(F("EV_TXSTART"));
            break;
        default:
            Serial.print(F("Unknown event: "));
            Serial.println((unsigned) ev);
            break;
    }
}

void do_send(osjob_t* j){
    // Check if there is not a current TX/RX job running
    if (LMIC.opmode & OP_TXRXPEND) {
        Serial.println(F("OP_TXRXPEND, not sending"));
    } else {
        // Prepare upstream data transmission at the next possible time.
        LMIC_setTxData2(1, mydata, sizeof(mydata)-1, 0);
        Serial.println(F("Packet queued"));
    }
    // Next TX is scheduled after TX_COMPLETE event.
}

void setup_display(void)
{
  u8g2.begin();
  u8g2.setFont(u8g2_font_profont11_mf);                         // set the font for the terminal window
  u8g2log.begin(u8g2, U8LOG_WIDTH, U8LOG_HEIGHT, u8log_buffer); // connect to u8g2, assign buffer
  u8g2log.setLineHeightOffset(0);                               // set extra space between lines in pixel, this can be negative
  u8g2log.setRedrawMode(0);                                     // 0: Update screen with newline, 1: Update screen for every char
  u8g2.enableUTF8Print();
  u8g2log.print("Display loaded...");
  u8g2log.print("\n");
  u8g2log.print("Terminal mode");
  u8g2log.print("\n");
}

void setup() {
    Serial.begin(115200);
    Serial.println(F("Starting"));
    setup_display();

    #ifdef VCC_ENABLE
    // For Pinoccio Scout boards
    pinMode(VCC_ENABLE, OUTPUT);
    digitalWrite(VCC_ENABLE, HIGH);
    delay(1000);
    #endif

    // LMIC init
    os_init();
    // Reset the MAC state. Session and pending data transfers will be discarded.
    LMIC_reset();

    // Start job (sending automatically starts OTAA too)
    do_send(&sendjob);
}

void loop() {
    os_runloop_once();
}