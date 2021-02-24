
// JT's keyboard config

#pragma once

#include "config_common.h"


#define PRODUCT         Dactyl-Manuform JT
#undef VENDOR_ID
#define VENDOR_ID       0xFEED
#undef PRODUCT_ID
#define PRODUCT_ID      0x5646
#define DEVICE_VER      0x0001
#undef MANUFACTURER
#define MANUFACTURER    tshort

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10		// L+R
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 }

#define DIODE_DIRECTION COL2ROW


// split keyboard definitions
// #define MASTER_LEFT
#define EE_HANDS
#define USE_I2C
// #define SPLIT_USB_DETECT
// #define SPLIT_USB_TIMEOUT 2000


// Lighting: WS2812 RGB LED strip input and number of LEDs
#undef RGB_DI_PIN
#undef RGBLED_NUM
#define RGB_DI_PIN D4
#define RGBLED_NUM 12
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT { 6, 6 }

#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 12
#define RGBLIGHT_SAT_STEP 12
#define RGBLIGHT_VAL_STEP 12


// OLED screen
#define SSD1306OLED
#define OLED_DISPLAY_ADDRESS 0x3C


/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3
