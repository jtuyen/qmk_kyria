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
#define SPLIT_TRANSPORT_MIRROR

#define COMBO_COUNT 13
#define COMBO_SHOULD_TRIGGER