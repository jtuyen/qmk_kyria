#include QMK_KEYBOARD_H

enum layers {
    HACK = 0,
    SYMBOL,
    NAVIGATION,
    NUMPAD_RGB,
};
enum tap_dance_keys {
    TD_LPRN_LBRC,
    TD_RPRN_RBRC,
    TD_LCTL_SPC,
};
enum combos {
    AZ_UNDO,
    SW_ALFRED_SNIPPET,
    SX_CUT,
    DC_COPY,
    FR_ALFRED_PASTE,
    FV_PASTE,
    AF_TMUX,
    AD_GMAIL_DEL,
    SCLN_QUOT_ENT,
};
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_LPRN_LBRC] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_LBRC),
    [TD_RPRN_RBRC] = ACTION_TAP_DANCE_DOUBLE(KC_RPRN, KC_RBRC),
    [TD_LCTL_SPC] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_SPC),
};
const uint16_t PROGMEM az_combo[] = {KC_A, KC_Z, COMBO_END};
const uint16_t PROGMEM sx_combo[] = {KC_S, KC_X, COMBO_END};
const uint16_t PROGMEM sw_combo[] = {KC_S, KC_W, COMBO_END};
const uint16_t PROGMEM dc_combo[] = {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM fv_combo[] = {KC_F, KC_V, COMBO_END};
const uint16_t PROGMEM fr_combo[] = {KC_F, KC_R, COMBO_END};
const uint16_t PROGMEM af_combo[] = {KC_A, KC_F, COMBO_END};
const uint16_t PROGMEM ad_combo[] = {KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM scln_quot_ent[] = {KC_SCLN, KC_QUOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [AZ_UNDO] = COMBO(az_combo, LGUI(KC_Z)),
  [SW_ALFRED_SNIPPET] = COMBO(sx_combo, LSG(KC_X)),
  [SX_CUT] = COMBO(sw_combo, LGUI(KC_X)),
  [DC_COPY] = COMBO(dc_combo, LGUI(KC_C)),
  [FR_ALFRED_PASTE] = COMBO(fv_combo, LSG(KC_V)),
  [FV_PASTE] = COMBO(fr_combo, LGUI(KC_V)),
  [AF_TMUX] = COMBO(af_combo, RCTL(KC_B)),
  [AD_GMAIL_DEL] = COMBO(ad_combo, KC_HASH),
  [SCLN_QUOT_ENT] = COMBO(scln_quot_ent, KC_ENT),
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[HACK] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, ALL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, OSM(MOD_LSFT), KC_Z, KC_X, KC_C, KC_V, KC_B, TD(TD_LCTL_SPC), TD(TD_LPRN_LBRC), TD(TD_RPRN_RBRC), KC_MINS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, KC_MUTE, KC_LGUI, KC_LALT, KC_ENT, MO(2), MO(1), KC_SPC, OSM(MOD_RCTL), KC_DEL, KC_MPLY),
	[SYMBOL] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, QK_GESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS, OSM(MOD_LSFT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RBRC, KC_NO, KC_COMM, KC_DOT, KC_SLSH, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS),
	[NAVIGATION] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, LGUI(KC_LEFT), KC_NO, KC_PGUP, LGUI(KC_RIGHT), KC_NO, KC_BSPC, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, LSG(KC_4), OSM(MOD_LSFT), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSG(KC_LEFT), KC_NO, KC_PGDN, LSG(KC_RIGHT), KC_MRWD, KC_MFFD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(3), KC_TRNS, KC_NO, KC_TRNS, KC_TRNS),
	[NUMPAD_RGB] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NUM, KC_P7, KC_P8, KC_P9, KC_PDOT, KC_BSPC, RGB_VAI, RGB_SPI, RGB_M_K, RGB_HUI, RGB_SAI, KC_NO, KC_PENT, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_PSLS, RGB_VAD, RGB_SPD, RGB_M_B, RGB_HUD, RGB_SAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PEQL, KC_P1, KC_P2, KC_P3, KC_PPLS, KC_PAST, KC_TRNS, RGB_TOG, KC_NO, KC_TRNS, TO(0), TO(3), KC_TRNS, KC_NO, KC_P0, KC_TRNS)
};
static const char PROGMEM hack_logo[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 
0xe0, 0xe0, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x30, 0xf0, 0xf0, 0xf0, 0x70, 0x70, 0x70, 0x70, 
0x70, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0xf8, 0x7c, 0x3e, 0x1f, 0x07, 0x07, 0x03, 0x01, 0x01, 
0x40, 0xc0, 0x80, 0x80, 0xc8, 0xf8, 0x79, 0x7f, 0xcf, 0x87, 0x03, 0x06, 0x04, 0x04, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x07, 0x0f, 0x1e, 0x3c, 0xf8, 0xe0, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xf8, 0xfc, 0xfc, 0xf8, 0xc0, 0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xe0, 
0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 
0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0x80, 0x80, 
0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
0xf8, 0x18, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x03, 0xe0, 0xc0, 0x80, 0x80, 0x42, 0x66, 0x3c, 0x78, 
0xc8, 0x0c, 0x07, 0x03, 0x03, 0x06, 0x04, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0xf0, 0xf0, 0x60, 0x60, 
0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0x3b, 0xff, 0xff, 0xf8, 
0x00, 0x00, 0x00, 0x78, 0xff, 0x7f, 0x03, 0x07, 0x1f, 0x3f, 0x1f, 0x03, 0x00, 0x01, 0x7f, 0xff, 
0xf8, 0x00, 0x1e, 0x7f, 0xf9, 0xf1, 0x99, 0x9d, 0x8f, 0x86, 0x06, 0xff, 0xff, 0x7c, 0x1e, 0x0f, 
0xff, 0xff, 0x7f, 0x1e, 0x07, 0x87, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xff, 0xf1, 0xb1, 0x99, 0x9f, 
0x8f, 0x04, 0x00, 0xff, 0x7f, 0x1e, 0x07, 0xff, 0xfe, 0xc0, 0x00, 0x0c, 0x0c, 0x06, 0xff, 0xff, 
0xe7, 0x06, 0x06, 0x06, 0x00, 0x1f, 0x3f, 0x31, 0x30, 0x3f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xe6, 0x02, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfe, 0xfe, 
0x7f, 0x3f, 0xc0, 0x70, 0x00, 0x00, 0x0f, 0x3f, 0x7f, 0xff, 0xff, 0xbf, 0xbf, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0xf0, 0xe0, 0x01, 
0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xc0, 0xc0, 0x40, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 
0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1f, 0x7e, 0xf8, 0xc0, 0x80, 0x00, 0x00, 0x80, 0xc0, 
0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x81, 0x83, 0x87, 0xc7, 0xcf, 0xcf, 0x6f, 0x3f, 0x16, 
0x07, 0x03, 0x01, 0x00, 0x00, 0x1c, 0x0e, 0x0e, 0x18, 0x00, 0xf8, 0xf1, 0x1d, 0x0f, 0x07, 0x01, 
0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x0f, 0x7f, 0xfe, 0xfc, 0x7f, 0x0f, 0x01, 0x1f, 0xff, 0xfe, 
0x80, 0x00, 0x7c, 0xfe, 0xc7, 0xc7, 0xff, 0x7e, 0x00, 0x0f, 0xff, 0xfe, 0x3c, 0x0e, 0x07, 0x03, 
0x00, 0xf8, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 
0x07, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x0f, 0x1e, 0x38, 0x30, 0x30, 
0x1e, 0x0e, 0x18, 0x10, 0x10, 0x1e, 0x0f, 0x0e, 0x0c, 0x08, 0x0f, 0x07, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 
0x0f, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 
0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

bool oled_task_user(void) {
        switch (get_highest_layer(layer_state|default_layer_state)) {
            case HACK:
                oled_write_raw_P(hack_logo, sizeof(hack_logo));
                break;
            case SYMBOL:
                oled_write_P(PSTR("SYMBOL"), false);
                break;
            case NAVIGATION:
                oled_write_P(PSTR("NAVIGATION"), false);
                break;
            case NUMPAD_RGB:
                oled_write_P(PSTR("NUMPAD+RGB"), false);
                break;
            default:
                oled_write_P(PSTR("Undefined\n"), false);
        }

        // Write host Keyboard LED Status to OLEDs
        led_t led_usb_state = host_keyboard_led_state();
        oled_write_P(led_usb_state.num_lock    ? PSTR("NUMLCK ") : PSTR("       "), false);
        oled_write_P(led_usb_state.caps_lock   ? PSTR("CAPLCK ") : PSTR("       "), false);
        oled_write_P(led_usb_state.scroll_lock ? PSTR("SCRLCK ") : PSTR("       "), false);
        return false;
}
#endif

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {

    if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return false;
}
#endif
