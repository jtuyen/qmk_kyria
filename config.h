#pragma once

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_HUE_STEP  8
    #define RGBLIGHT_SAT_STEP  8
    #define RGBLIGHT_VAL_STEP  8
    #define RGBLIGHT_LIMIT_VAL 150
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_LAYERS
    #define RGBLIGHT_SPLIT
    #define RGBLIGHT_LAYER_BLINK
#endif

// Enable OLED to mirror data on both sides
#define SPLIT_TRANSPORT_MIRROR

#define COMBO_COUNT 17
#define COMBO_SHOULD_TRIGGER

#define LEADER_TIMEOUT 300

#define DYNAMIC_MACRO_SIZE 256

#define MAX_DEFERRED_EXECUTORS 10
