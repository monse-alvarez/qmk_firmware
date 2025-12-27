#pragma once

#include "config_common.h"

/* USB Device descriptor */
#define VENDOR_ID       0xAA96
#define PRODUCT_ID      0xAAF1
#define DEVICE_VER      0x0001
#define MANUFACTURER    Hyperboring
#define PRODUCT         H80 RGB

/* Matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

/* Matrix pins */
#define MATRIX_ROW_PINS { A15, B3, B5, A4, A5, F1 }
#define MATRIX_COL_PINS { B1, B2, B10, B11, B12, B14, A8, A9, A10, A3, B0, A2, A1, A7, A0, B4, B6, B7 }

#define DIODE_DIRECTION COL2ROW

/* Debounce */
#define DEBOUNCE 5

/* RGB Matrix (per-key RGB only) */
#define RGB_MATRIX_ENABLE
#define RGB_MATRIX_LED_COUNT 91
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180
#define RGB_MATRIX_SLEEP

#define RGB_DI_PIN A4
#define WS2812_DI_PIN A4
#define WS2812_PWM_DRIVER PWMD3
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_PAL_MODE 1
#define WS2812_EXTERNAL_PULLUP

/* Disable underglow completely */
#undef RGBLIGHT_ENABLE

/* VIA */
#define VIA_ENABLE
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
