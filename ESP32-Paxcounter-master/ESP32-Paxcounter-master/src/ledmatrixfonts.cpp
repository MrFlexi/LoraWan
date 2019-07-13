#ifdef HAS_MATRIX_DISPLAY
#include "ledmatrixfonts.h"
#include "Arduino.h"
//
//  Font data for Arial Narrow 17pt
//

// Character bitmaps for Arial Narrow 17pt
const uint8_t arialNarrow_17ptBitmaps[] = {
    // @0 '-' (10 pixels wide)
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00111110, 0b00000000, //   #####
    0b00111110, 0b00000000, //   #####
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //
    0b00000000, 0b00000000, //

    // @32 '0' (10 pixels wide)
    0b00011110, 0b00000000, //    ####
    0b00111111, 0b00000000, //   ######
    0b00110011, 0b00000000, //   ##  ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b00110011, 0b00000000, //   ##  ##
    0b00111111, 0b00000000, //   ######
    0b00011110, 0b00000000, //    ####

    // @64 '1' (10 pixels wide)
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##
    0b00001110, 0b00000000, //     ###
    0b00011110, 0b00000000, //    ####
    0b00110110, 0b00000000, //   ## ##
    0b00100110, 0b00000000, //   #  ##
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##

    // @96 '2' (10 pixels wide)
    0b00011110, 0b00000000, //    ####
    0b00111111, 0b00000000, //   ######
    0b00110011, 0b10000000, //   ##  ###
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b00000001, 0b10000000, //        ##
    0b00000001, 0b10000000, //        ##
    0b00000011, 0b00000000, //       ##
    0b00000111, 0b00000000, //      ###
    0b00001110, 0b00000000, //     ###
    0b00001100, 0b00000000, //     ##
    0b00011000, 0b00000000, //    ##
    0b00110000, 0b00000000, //   ##
    0b00100000, 0b00000000, //   #
    0b01111111, 0b10000000, //  ########
    0b01111111, 0b10000000, //  ########

    // @128 '3' (10 pixels wide)
    0b00011110, 0b00000000, //    ####
    0b00111111, 0b00000000, //   ######
    0b01110011, 0b10000000, //  ###  ###
    0b01100001, 0b10000000, //  ##    ##
    0b00000001, 0b10000000, //        ##
    0b00000011, 0b10000000, //       ###
    0b00001111, 0b00000000, //     ####
    0b00001110, 0b00000000, //     ###
    0b00000011, 0b00000000, //       ##
    0b00000001, 0b10000000, //        ##
    0b00000001, 0b10000000, //        ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b00110011, 0b10000000, //   ##  ###
    0b00111111, 0b00000000, //   ######
    0b00011110, 0b00000000, //    ####

    // @160 '4' (10 pixels wide)
    0b00000111, 0b00000000, //      ###
    0b00000111, 0b00000000, //      ###
    0b00001111, 0b00000000, //     ####
    0b00001111, 0b00000000, //     ####
    0b00011011, 0b00000000, //    ## ##
    0b00011011, 0b00000000, //    ## ##
    0b00110011, 0b00000000, //   ##  ##
    0b01100011, 0b00000000, //  ##   ##
    0b01100011, 0b00000000, //  ##   ##
    0b11000011, 0b00000000, // ##    ##
    0b11111111, 0b11000000, // ##########
    0b11111111, 0b11000000, // ##########
    0b00000011, 0b00000000, //       ##
    0b00000011, 0b00000000, //       ##
    0b00000011, 0b00000000, //       ##
    0b00000011, 0b00000000, //       ##

    // @192 '5' (10 pixels wide)
    0b00111111, 0b00000000, //   ######
    0b00111111, 0b00000000, //   ######
    0b00110000, 0b00000000, //   ##
    0b00110000, 0b00000000, //   ##
    0b01100000, 0b00000000, //  ##
    0b01101110, 0b00000000, //  ## ###
    0b01111111, 0b00000000, //  #######
    0b01110011, 0b10000000, //  ###  ###
    0b00000001, 0b10000000, //        ##
    0b00000001, 0b10000000, //        ##
    0b00000001, 0b10000000, //        ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b00110011, 0b00000000, //   ##  ##
    0b00111111, 0b00000000, //   ######
    0b00011110, 0b00000000, //    ####

    // @224 '6' (10 pixels wide)
    0b00001110, 0b00000000, //     ###
    0b00011111, 0b00000000, //    #####
    0b00110011, 0b10000000, //   ##  ###
    0b00100001, 0b10000000, //   #    ##
    0b01100000, 0b00000000, //  ##
    0b01101110, 0b00000000, //  ## ###
    0b01111111, 0b00000000, //  #######
    0b01110011, 0b10000000, //  ###  ###
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b00110011, 0b00000000, //   ##  ##
    0b00111111, 0b00000000, //   ######
    0b00011110, 0b00000000, //    ####

    // @256 '7' (10 pixels wide)
    0b01111111, 0b10000000, //  ########
    0b01111111, 0b10000000, //  ########
    0b00000001, 0b00000000, //        #
    0b00000011, 0b00000000, //       ##
    0b00000011, 0b00000000, //       ##
    0b00000110, 0b00000000, //      ##
    0b00000110, 0b00000000, //      ##
    0b00000100, 0b00000000, //      #
    0b00001100, 0b00000000, //     ##
    0b00001100, 0b00000000, //     ##
    0b00001100, 0b00000000, //     ##
    0b00001100, 0b00000000, //     ##
    0b00011000, 0b00000000, //    ##
    0b00011000, 0b00000000, //    ##
    0b00011000, 0b00000000, //    ##
    0b00011000, 0b00000000, //    ##

    // @288 '8' (10 pixels wide)
    0b00011110, 0b00000000, //    ####
    0b00111111, 0b00000000, //   ######
    0b01110011, 0b10000000, //  ###  ###
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01110011, 0b10000000, //  ###  ###
    0b00111111, 0b00000000, //   ######
    0b00111111, 0b00000000, //   ######
    0b00110011, 0b00000000, //   ##  ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01110011, 0b10000000, //  ###  ###
    0b00111111, 0b00000000, //   ######
    0b00011110, 0b00000000, //    ####

    // @320 '9' (10 pixels wide)
    0b00011110, 0b00000000, //    ####
    0b00111111, 0b00000000, //   ######
    0b00110011, 0b00000000, //   ##  ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01100001, 0b10000000, //  ##    ##
    0b01110011, 0b10000000, //  ###  ###
    0b00111111, 0b10000000, //   #######
    0b00011101, 0b10000000, //    ### ##
    0b00000001, 0b10000000, //        ##
    0b01100001, 0b00000000, //  ##    #
    0b01110011, 0b00000000, //  ###  ##
    0b00111110, 0b00000000, //   #####
    0b00011100, 0b00000000, //    ###
};

// Character descriptors for Arial Narrow 17pt
// { [Char width in bits], [Char height in bits], [Offset into
// arialNarrow_17ptBitmaps in bytes] }
const FONT_CHAR_INFO arialNarrow_17ptDescriptors[] = {
    {10, 16, 0},   // -
    {0, 0, 0},     // .
    {0, 0, 0},     // /
    {10, 16, 32},  // 0
    {10, 16, 64},  // 1
    {10, 16, 80},  // 2
    {10, 16, 112}, // 3
    {10, 16, 144}, // 4
    {10, 16, 176}, // 5
    {10, 16, 208}, // 6
    {10, 16, 240}, // 7
    {10, 16, 272}, // 8
    {10, 16, 304}, // 9
};

// Font information for Arial Narrow 17pt

const FONT_INFO arialNarrow_17ptFontInfo = {
    16,                           //  Character height
    '-',                         //  Start character
    '9',                         //  End character
    2,                           //  Width, in pixels, of space character
    arialNarrow_17ptDescriptors, //  Character descriptor array
    arialNarrow_17ptBitmaps};    //  Character bitmap array

//
//  Font data for Gill Sans MT Condensed 18pt
//

// Character bitmaps for Gill Sans MT Condensed 18pt
const uint8_t gillSansMTCondensed_18ptBitmaps[] = {
    // @0 '-' (8 pixels wide)
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b01111100, //  #####
    0b01111100, //  #####
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //

    // @16 '0' (8 pixels wide)
    0b00111100, //   ####
    0b01111110, //  ######
    0b01111110, //  ######
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b01111110, //  ######
    0b01111110, //  ######
    0b00111100, //   ####

    // @32 '1' (8 pixels wide)
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###

    // @48 '2' (8 pixels wide)
    0b11111100, // ######
    0b11111110, // #######
    0b11001111, // ##  ####
    0b00000111, //      ###
    0b00000111, //      ###
    0b00000111, //      ###
    0b00000111, //      ###
    0b00000110, //      ##
    0b00001110, //     ###
    0b00001110, //     ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00111000, //   ###
    0b01110000, //  ###
    0b01111111, //  #######
    0b11111111, // ########

    // @64 '3' (8 pixels wide)
    0b11111000, // #####
    0b11111100, // ######
    0b00011110, //    ####
    0b00001110, //     ###
    0b00001110, //     ###
    0b00011100, //    ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00011100, //    ###
    0b00001110, //     ###
    0b00001110, //     ###
    0b00001110, //     ###
    0b00001110, //     ###
    0b11011110, // ## ####
    0b11111100, // ######
    0b11111000, // #####

    // @80 '4' (8 pixels wide)
    0b00001110, //     ###
    0b00001110, //     ###
    0b00011110, //    ####
    0b00011110, //    ####
    0b00111110, //   #####
    0b00111110, //   #####
    0b00111110, //   #####
    0b01101110, //  ## ###
    0b01101110, //  ## ###
    0b11001110, // ##  ###
    0b11001110, // ##  ###
    0b11111111, // ########
    0b00001110, //     ###
    0b00001110, //     ###
    0b00001110, //     ###
    0b00001110, //     ###

    // @96 '5' (8 pixels wide)
    0b01111110, //  ######
    0b01111110, //  ######
    0b01110000, //  ###
    0b01110000, //  ###
    0b01110000, //  ###
    0b01110000, //  ###
    0b01111000, //  ####
    0b01111100, //  #####
    0b00011110, //    ####
    0b00001110, //     ###
    0b00001110, //     ###
    0b00001110, //     ###
    0b00001110, //     ###
    0b00011100, //    ###
    0b11111100, // ######
    0b11111000, // #####

    // @112 '6' (8 pixels wide)
    0b00001110, //     ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b01110000, //  ###
    0b01111100, //  #####
    0b11111110, // #######
    0b11110111, // #### ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11111111, // ########
    0b01111110, //  ######
    0b00111100, //   ####

    // @128 '7' (8 pixels wide)
    0b11111111, // ########
    0b11111111, // ########
    0b00001110, //     ###
    0b00001110, //     ###
    0b00001110, //     ###
    0b00001110, //     ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00110000, //   ##
    0b01110000, //  ###
    0b01110000, //  ###

    // @144 '8' (8 pixels wide)
    0b00111100, //   ####
    0b01111110, //  ######
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b01111110, //  ######
    0b01111110, //  ######
    0b01111110, //  ######
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11111111, // ########
    0b01111110, //  ######
    0b00111100, //   ####

    // @160 '9' (8 pixels wide)
    0b00111100, //   ####
    0b01111110, //  ######
    0b11111111, // ########
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11100111, // ###  ###
    0b11101111, // ### ####
    0b01111111, //  #######
    0b00111110, //   #####
    0b00001110, //     ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b01110000, //  ###
};

// Character descriptors for Gill Sans MT Condensed 18pt
// { [Char width in bits], [Char height in bits], [Offset into
// gillSansMTCondensed_18ptCharBitmaps in bytes] }
const FONT_CHAR_INFO gillSansMTCondensed_18ptDescriptors[] = {
    {8, 16, 0},   // -
    {0, 0, 0},    // .
    {0, 0, 0},    // /
    {8, 16, 16},  // 0
    {8, 16, 32},  // 1
    {8, 16, 48},  // 2
    {8, 16, 64},  // 3
    {8, 16, 80},  // 4
    {8, 16, 96},  // 5
    {8, 16, 112}, // 6
    {8, 16, 128}, // 7
    {8, 16, 144}, // 8
    {8, 16, 160}, // 9
};

// Font information for Gill Sans MT Condensed 18pt
const FONT_INFO gillSansMTCondensed_18ptFontInfo = {
    16,   //  Character height
    '-', //  Start character
    '9', //  End character
    2,   //  Width, in pixels, of space character
    gillSansMTCondensed_18ptDescriptors,
    gillSansMTCondensed_18ptBitmaps};

//
//  Font data for Gill Sans MT Condensed 16pt
//

// Character bitmaps for Gill Sans MT Condensed 16pt
const uint8_t gillSansMTCondensed_16ptBitmaps[] = {
    // @0 '-' (7 pixels wide)
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00111110, //   #####
    0b00111110, //   #####
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //

    // @14 '0' (7 pixels wide)
    0b00111000, //   ###
    0b01111100, //  #####
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b01111100, //  #####
    0b00111000, //   ###

    // @28 '1' (7 pixels wide)
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###

    // @42 '2' (7 pixels wide)
    0b11111000, // #####
    0b11111100, // ######
    0b00011110, //    ####
    0b00001110, //     ###
    0b00001110, //     ###
    0b00001110, //     ###
    0b00001100, //     ##
    0b00011100, //    ###
    0b00011100, //    ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b01110000, //  ###
    0b01111110, //  ######
    0b11111110, // #######

    // @56 '3' (7 pixels wide)
    0b11110000, // ####
    0b11111000, // #####
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b11111000, // #####
    0b11110000, // ####

    // @70 '4' (7 pixels wide)
    0b00011100, //    ###
    0b00011100, //    ###
    0b00111100, //   ####
    0b00111100, //   ####
    0b01111100, //  #####
    0b01111100, //  #####
    0b01111100, //  #####
    0b11011100, // ## ###
    0b11011100, // ## ###
    0b11111110, // #######
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###

    // @84 '5' (7 pixels wide)
    0b01111110, //  ######
    0b01111110, //  ######
    0b01110000, //  ###
    0b01110000, //  ###
    0b01110000, //  ###
    0b01110000, //  ###
    0b01111100, //  #####
    0b01111100, //  #####
    0b00011110, //    ####
    0b00001110, //     ###
    0b00001110, //     ###
    0b00011110, //    ####
    0b11111100, // ######
    0b11111000, // #####

    // @98 '6' (7 pixels wide)
    0b00011100, //    ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b01110000, //  ###
    0b01110000, //  ###
    0b01111100, //  #####
    0b11111100, // ######
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b01111100, //  #####
    0b01111000, //  ####

    // @112 '7' (7 pixels wide)
    0b11111110, // #######
    0b11111110, // #######
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00011100, //    ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b01110000, //  ###
    0b01110000, //  ###
    0b01110000, //  ###

    // @126 '8' (7 pixels wide)
    0b01111100, //  #####
    0b01111100, //  #####
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b01111100, //  #####
    0b01111100, //  #####
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b01111100, //  #####
    0b01111100, //  #####

    // @140 '9' (7 pixels wide)
    0b00111100, //   ####
    0b01111100, //  #####
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b11101110, // ### ###
    0b01111110, //  ######
    0b01111100, //  #####
    0b00011100, //    ###
    0b00011100, //    ###
    0b00111000, //   ###
    0b00111000, //   ###
    0b01110000, //  ###
};

// Character descriptors for Gill Sans MT Condensed 16pt
// { [Char width in bits], [Char height in bits], [Offset into
// gillSansMTCondensed_16ptCharBitmaps in bytes] }
const FONT_CHAR_INFO gillSansMTCondensed_16ptDescriptors[] = {
    {7, 14, 0},   // -
    {0, 0, 0},    // .
    {0, 0, 0},    // /
    {7, 14, 14},  // 0
    {7, 14, 28},  // 1
    {7, 14, 42},  // 2
    {7, 14, 56},  // 3
    {7, 14, 70},  // 4
    {7, 14, 84},  // 5
    {7, 14, 98},  // 6
    {7, 14, 112}, // 7
    {7, 14, 126}, // 8
    {7, 14, 140}, // 9
};

// Font information for Gill Sans MT Condensed 16pt
const FONT_INFO gillSansMTCondensed_16ptFontInfo = {
    14,   //  Character height
    '-', //  Start character
    '9', //  End character
    2,   //  Width, in pixels, of space character
    gillSansMTCondensed_16ptDescriptors, //  Character descriptor array
    gillSansMTCondensed_16ptBitmaps,     //  Character bitmap array
};

//
//  Font data for Digital-7 18pt
//

// Character bitmaps for Digital-7 18pt
const uint8_t digital7_18ptBitmaps[] = {
    // @0 '-' (7 pixels wide)
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b11111110, // #######
    0b11111110, // #######
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //

    // @16 '.' (3 pixels wide)
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b00000000, //
    0b11100000, // ###
    0b11100000, // ###

    // @32 '0' (11 pixels wide)
    0b00111111, 0b10000000, //   #######
    0b01111111, 0b11000000, //  #########
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11000000, 0b01100000, // ##       ##
    0b11000000, 0b01100000, // ##       ##
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b01111111, 0b11000000, //  #########
    0b00111111, 0b10000000, //   #######

    // @64 '1' (3 pixels wide)
    0b01100000, //  ##
    0b11100000, // ###
    0b11100000, // ###
    0b11100000, // ###
    0b11100000, // ###
    0b11100000, // ###
    0b11100000, // ###
    0b01100000, //  ##
    0b01100000, //  ##
    0b11100000, // ###
    0b11100000, // ###
    0b11100000, // ###
    0b11100000, // ###
    0b11100000, // ###
    0b11100000, // ###
    0b01100000, //  ##

    // @80 '2' (11 pixels wide)
    0b11111111, 0b10000000, // #########
    0b01111111, 0b11000000, //  #########
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b01111111, 0b11100000, //  ##########
    0b11111111, 0b11000000, // ##########
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b01111111, 0b11000000, //  #########
    0b00111111, 0b11100000, //   #########

    // @112 '3' (10 pixels wide)
    0b11111111, 0b00000000, // ########
    0b11111111, 0b11000000, // ##########
    0b00000001, 0b11000000, //        ###
    0b00000001, 0b11000000, //        ###
    0b00000001, 0b11000000, //        ###
    0b00000001, 0b11000000, //        ###
    0b00000001, 0b11000000, //        ###
    0b01111111, 0b11000000, //  #########
    0b01111111, 0b11000000, //  #########
    0b00000001, 0b11000000, //        ###
    0b00000001, 0b11000000, //        ###
    0b00000001, 0b11000000, //        ###
    0b00000001, 0b11000000, //        ###
    0b00000001, 0b11000000, //        ###
    0b11111111, 0b11000000, // ##########
    0b11111111, 0b00000000, // ########

    // @144 '4' (11 pixels wide)
    0b11000000, 0b01100000, // ##       ##
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11111111, 0b11100000, // ###########
    0b01111111, 0b11100000, //  ##########
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b01100000, //          ##

    // @176 '5' (11 pixels wide)
    0b00111111, 0b11000000, //   ########
    0b01111111, 0b10000000, //  ########
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11111111, 0b10000000, // #########
    0b01111111, 0b11100000, //  ##########
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b01111111, 0b11000000, //  #########
    0b11111111, 0b10000000, // #########

    // @208 '6' (11 pixels wide)
    0b00111111, 0b11000000, //   ########
    0b01111111, 0b10000000, //  ########
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11100000, 0b00000000, // ###
    0b11111111, 0b10000000, // #########
    0b11111111, 0b11100000, // ###########
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11111111, 0b11100000, // ###########
    0b01111111, 0b10000000, //  ########

    // @240 '7' (11 pixels wide)
    0b00111111, 0b10000000, //   #######
    0b01111111, 0b11100000, //  ##########
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11000000, 0b01100000, // ##       ##
    0b00000000, 0b01100000, //          ##
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b01100000, //          ##

    // @272 '8' (11 pixels wide)
    0b00111111, 0b10000000, //   #######
    0b01111111, 0b11000000, //  #########
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11111111, 0b11100000, // ###########
    0b11111111, 0b11100000, // ###########
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b01111111, 0b11000000, //  #########
    0b00111111, 0b10000000, //   #######

    // @304 '9' (11 pixels wide)
    0b00111111, 0b11000000, //   ########
    0b01111111, 0b11100000, //  ##########
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11100000, 0b11100000, // ###     ###
    0b11111111, 0b11100000, // ###########
    0b01111111, 0b11100000, //  ##########
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b00000000, 0b11100000, //         ###
    0b01111111, 0b11000000, //  #########
    0b11111111, 0b10000000, // #########
};

// Character descriptors for Digital-7 18pt
// { [Char width in bits], [Char height in bits], [Offset into
// digital7_18ptCharBitmaps in bytes] }
const FONT_CHAR_INFO digital7_18ptDescriptors[] = {
    {7, 16, 0},    // -
    {3, 16, 16},   // .
    {0, 0, 0},     // /
    {11, 16, 32},  // 0
    {3, 16, 64},   // 1
    {11, 16, 80},  // 2
    {10, 16, 112}, // 3
    {11, 16, 144}, // 4
    {11, 16, 176}, // 5
    {11, 16, 208}, // 6
    {11, 16, 240}, // 7
    {11, 16, 272}, // 8
    {11, 16, 304}, // 9
};

// Font information for Digital-7 18pt
const FONT_INFO digital7_18ptFontInfo = {
    16,                       //  Character height
    '-',                      //  Start character
    '9',                      //  End character
    2,                        //  Width, in pixels, of space character
    digital7_18ptDescriptors, //  Character descriptor array
    digital7_18ptBitmaps,     //  Character bitmap array
};
#endif