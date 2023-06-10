#pragma once

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_HUE_STEP  8
    #define RGBLIGHT_SAT_STEP  8
    #define RGBLIGHT_VAL_STEP  8
    #define RGBLIGHT_LIMIT_VAL 150
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_LAYERS
    #define RGBLIGHT_SPLIT
#endif

// Enable OLED to mirror data on both sides
// #define SPLIT_TRANSPORT_MIRROR

// Enable RGB sync for both sides
// #define SPLIT_LED_STATE_ENABLE
// #define SPLIT_LAYER_STATE_ENABLE

// Lets you roll mod-tap keys
#define IGNORE_MOD_TAP_INTERRUPT

#define COMBO_COUNT 12
#define COMBO_SHOULD_TRIGGER