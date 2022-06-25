#pragma once

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_KNIGHT
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_HUE_STEP  8
#    define RGBLIGHT_SAT_STEP  8
#    define RGBLIGHT_VAL_STEP  8
#    define RGBLIGHT_LIMIT_VAL 150
#    define RGBLIGHT_SLEEP
#endif

// Lets you roll mod-tap keys
#define IGNORE_MOD_TAP_INTERRUPT

#define COMBO_COUNT 8
