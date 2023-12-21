#include QMK_KEYBOARD_H

enum layers {
    MAC_BASE = 0,
    MAC_SYMBOL,
    MAC_NAVIGATION,
    WIN_BASE,
    WIN_SYMBOL,
    WIN_NAVIGATION,
    NUMPAD_RGB,
};
enum tap_dance_keys {
    TD_LPRN_LBRC,
    TD_RPRN_RBRC,
    TD_LCTL_SPC,
};
enum combos {
    MAC_AZ_UNDO,
    MAC_SW_ALFRED_SNIPPET,
    MAC_SX_CUT,
    MAC_DC_COPY,
    MAC_FR_ALFRED_PASTE,
    MAC_FV_PASTE,
    MAC_QA_MISSION_CTRL,
    WINMAC_SCLN_QUOT_ENT,
    WIN_AZ_UNDO,
    WIN_SX_CUT,
    WIN_DC_COPY,
    WIN_FR_CLIP_HISTORY,
    WIN_FV_PASTE,
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_LPRN_LBRC] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_LBRC),
    [TD_RPRN_RBRC] = ACTION_TAP_DANCE_DOUBLE(KC_RPRN, KC_RBRC),
    [TD_LCTL_SPC] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, KC_SPC),
};

const uint16_t PROGMEM mac_az_combo[] = {KC_A, KC_Z, COMBO_END};
const uint16_t PROGMEM mac_sx_combo[] = {KC_S, KC_X, COMBO_END};
const uint16_t PROGMEM mac_sw_combo[] = {KC_S, KC_W, COMBO_END};
const uint16_t PROGMEM mac_dc_combo[] = {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM mac_fv_combo[] = {KC_F, KC_V, COMBO_END};
const uint16_t PROGMEM mac_fr_combo[] = {KC_F, KC_R, COMBO_END};
const uint16_t PROGMEM mac_qa_combo[] = {KC_Q, KC_A, COMBO_END};
const uint16_t PROGMEM winmac_scln_quot_ent[] = {KC_SCLN, KC_QUOT, COMBO_END};
const uint16_t PROGMEM win_az_combo[] = {KC_A, KC_Z, COMBO_END};
const uint16_t PROGMEM win_sx_combo[] = {KC_S, KC_X, COMBO_END};
const uint16_t PROGMEM win_dc_combo[] = {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM win_fr_combo[] = {KC_F, KC_R, COMBO_END};
const uint16_t PROGMEM win_fv_combo[] = {KC_F, KC_V, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [MAC_AZ_UNDO] = COMBO(mac_az_combo, LGUI(KC_Z)),
  [MAC_SW_ALFRED_SNIPPET] = COMBO(mac_sw_combo, LSG(KC_W)),
  [MAC_SX_CUT] = COMBO(mac_sx_combo, LGUI(KC_X)),
  [MAC_DC_COPY] = COMBO(mac_dc_combo, LGUI(KC_C)),
  [MAC_FR_ALFRED_PASTE] = COMBO(mac_fr_combo, LSG(KC_V)),
  [MAC_FV_PASTE] = COMBO(mac_fv_combo, LGUI(KC_V)),
  [MAC_QA_MISSION_CTRL] = COMBO(mac_qa_combo, LCTL(KC_UP)),
  [WINMAC_SCLN_QUOT_ENT] = COMBO(winmac_scln_quot_ent, (KC_ENT)),
  [WIN_AZ_UNDO] = COMBO(win_az_combo, RCTL(KC_Z)),
  [WIN_SX_CUT] = COMBO(win_sx_combo, RCTL(KC_X)),
  [WIN_DC_COPY] = COMBO(win_dc_combo, RCTL(KC_C)),
  [WIN_FV_PASTE] = COMBO(win_fv_combo, RCTL(KC_V)),
  [WIN_FR_CLIP_HISTORY] = COMBO(win_fr_combo, LGUI(KC_V)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[MAC_BASE] = LAYOUT(MEH_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, ALL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, TD(TD_LCTL_SPC), TD(TD_LPRN_LBRC), TD(TD_RPRN_RBRC), KC_MINS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, KC_MUTE, KC_LGUI, KC_LALT, KC_ENT, MO(2), MO(1), KC_SPC, KC_RCTL, KC_DEL, KC_MPLY),
	[MAC_SYMBOL] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, QK_GESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS, KC_LSFT, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_COMM, KC_DOT, KC_SLSH, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS),
	[MAC_NAVIGATION] = LAYOUT(KC_TAB, LGUI(KC_Q), LGUI(KC_W), LGUI(KC_E), LGUI(KC_R), LGUI(KC_T), LGUI(KC_LEFT), KC_NO, KC_PGUP, LGUI(KC_RIGHT), KC_NO, KC_BSPC, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, LCTL(KC_B), LSG(KC_4), KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSA(KC_LEFT), KC_NO, KC_PGDN, LSA(KC_RIGHT), KC_MRWD, KC_MFFD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(6), KC_TRNS, KC_NO, KC_TRNS, KC_TRNS),
	[WIN_BASE] = LAYOUT(MEH_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LGUI_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, TD(TD_LCTL_SPC), TD(TD_LPRN_LBRC), TD(TD_RPRN_RBRC), KC_MINS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, KC_MUTE, KC_LGUI, KC_LALT, KC_ENT, MO(5), MO(4), KC_SPC, KC_LCTL, KC_DEL, KC_MPLY),
	[WIN_SYMBOL] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, QK_GESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS, KC_LSFT, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_COMM, KC_DOT, KC_SLSH, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(3), KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS),
	[WIN_NAVIGATION] = LAYOUT(RCS(KC_ESC), KC_NO, LALT(KC_F4), LGUI(KC_E), KC_R, KC_T, KC_HOME, KC_NO, KC_PGUP, KC_END, KC_NO, KC_BSPC, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, LCTL(KC_B), LSG(KC_S), KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RCS(KC_LEFT), KC_NO, KC_PGDN, RCS(KC_RIGHT), KC_MRWD, KC_MFFD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(6), KC_TRNS, KC_NO, KC_TRNS, KC_TRNS),
	[NUMPAD_RGB] = LAYOUT(TO(0), TO(3), KC_NO, KC_NO, KC_NO, KC_NO, KC_NUM, KC_P7, KC_P8, KC_P9, KC_PDOT, KC_BSPC, RGB_VAI, RGB_SPI, RGB_M_K, RGB_HUI, RGB_SAI, KC_NO, KC_PENT, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_PSLS, RGB_VAD, RGB_SPD, RGB_M_B, RGB_HUD, RGB_SAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PEQL, KC_P1, KC_P2, KC_P3, KC_PPLS, KC_PAST, KC_TRNS, RGB_TOG, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_P0, KC_TRNS)
};

static const char PROGMEM mac_logo[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0x7f, 0x0f, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x7c, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x07, 0x03, 0x81, 0x80, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 
0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xfc, 
0xfc, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xf8, 0x70, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0x1f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xf9, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xfe, 0xf8, 0xf0, 0xe0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 0x3f, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0f, 
0x1f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x3f, 0x1f, 
0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 
0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
static const char PROGMEM windows_logo[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x02, 0x03, 0x03, 0x00, 0x10, 0x18, 0x18, 
0x18, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x06, 0x00, 0x00, 0x20, 
0x60, 0x01, 0x21, 0x01, 0x81, 0x08, 0x8e, 0x0e, 0x8e, 0x0e, 0x0e, 0x70, 0x78, 0x78, 0x78, 0x78, 
0x38, 0xc8, 0xf0, 0xf8, 0xf8, 0xf8, 0xf8, 0x78, 0xc8, 0xf0, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 
0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x04, 0x04, 0x06, 0x00, 0x40, 0x60, 0x60, 0x21, 0x00, 0x01, 0x00, 0x08, 0x08, 0x18, 
0x00, 0x40, 0xa0, 0x42, 0xa1, 0x22, 0x01, 0x82, 0x80, 0x18, 0x86, 0x98, 0x06, 0x18, 0xc2, 0xf8, 
0xfc, 0xfd, 0xfd, 0xfd, 0x3d, 0x8d, 0x71, 0x8a, 0x75, 0x8b, 0x75, 0x8b, 0x75, 0x8b, 0x75, 0x8b, 
0xfb, 0xff, 0xff, 0xff, 0xbf, 0x4f, 0x37, 0xcf, 0x1f, 0x6f, 0x9f, 0x7f, 0xbf, 0x7f, 0xfe, 0xfe, 
0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 
0x01, 0x01, 0x00, 0x00, 0x10, 0x08, 0x18, 0x00, 0xc0, 0x00, 0xc7, 0x47, 0x07, 0x07, 0x31, 0x3c, 
0x38, 0x3c, 0x38, 0x1c, 0xe0, 0xf0, 0xf0, 0xf2, 0xf1, 0xf2, 0x91, 0xe2, 0xfc, 0xff, 0xef, 0xff, 
0xef, 0xaf, 0xe7, 0xe9, 0xf4, 0xcb, 0xf4, 0xcb, 0xf4, 0xcb, 0xf4, 0xcb, 0xd4, 0xfb, 0xfe, 0xff, 
0xff, 0x3f, 0xc7, 0x39, 0x86, 0x69, 0x94, 0x4b, 0xb0, 0x07, 0x78, 0x82, 0xf5, 0xfe, 0xff, 0xff, 
0xff, 0x7f, 0x1f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x18, 0x00, 0x80, 
0x80, 0x80, 0x86, 0x02, 0x02, 0x00, 0x30, 0x10, 0x30, 0x01, 0x00, 0xc0, 0x40, 0xc6, 0x92, 0x05, 
0x0a, 0x00, 0x30, 0x09, 0x31, 0x29, 0x19, 0x81, 0xf1, 0xf8, 0xfb, 0xfb, 0xfb, 0x7b, 0x9b, 0x53, 
0xa4, 0xdb, 0x37, 0xcb, 0xbf, 0x43, 0xbf, 0xd3, 0x2f, 0xeb, 0xff, 0xff, 0xff, 0x7f, 0x9f, 0x4f, 
0x1f, 0x5f, 0x3e, 0xbf, 0x7e, 0x7c, 0xfd, 0xf2, 0xfc, 0xf3, 0xfc, 0xff, 0xff, 0xff, 0x7f, 0x0f, 
0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x01, 0x01, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x40, 0x70, 0x70, 0x71, 0x70, 0x31, 0x80, 0xc0, 0xc8, 
0xc6, 0xc9, 0xc6, 0x49, 0x86, 0xb1, 0xbe, 0xbe, 0xbe, 0xbe, 0x3e, 0xce, 0xb2, 0xcc, 0xb3, 0xcc, 
0xfb, 0x84, 0xff, 0xa0, 0x5f, 0xb1, 0xee, 0xfd, 0xff, 0xff, 0x7f, 0x9f, 0x03, 0xa8, 0x12, 0x44, 
0x11, 0x44, 0x91, 0x44, 0x12, 0xc9, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0f, 0x01, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x03, 0x03, 
0x03, 0x03, 0x09, 0x0e, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x09, 0x0e, 0x0f, 0x0f, 0x0f, 0x1f, 0x1f, 
0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xfc, 0xfe, 0xfc, 0xfa, 0xf9, 0xf4, 
0xe1, 0xea, 0xe0, 0xfa, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 
0x0f, 0x1f, 0x3f, 0x7f, 0xff, 0x1f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Enable this line when turning on OLED display to sync displays
bool should_process_keypress(void) { return true; }

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

bool oled_task_user(void) {
        switch (get_highest_layer(layer_state|default_layer_state)) {
            case MAC_BASE:
                oled_write_raw_P(mac_logo, sizeof(mac_logo));
                break;
            case MAC_SYMBOL:
                oled_write_P(PSTR("MAC-SYMBOL"), false);
                break;
            case MAC_NAVIGATION:
                oled_write_P(PSTR("MAC-NAVIGATION"), false);
                break;
            case WIN_BASE:
                oled_write_raw_P(windows_logo, sizeof(windows_logo));
                break;
            case WIN_SYMBOL:
                oled_write_P(PSTR("WIN-SYMBOL"), false);
                break;
            case WIN_NAVIGATION:
                oled_write_P(PSTR("WIN-NAVIGATION"), false);
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

// #ifdef OLED_ENABLE
// // Disable OLED display
// bool oled_task_user(void) {
//     if (is_oled_on()) {
//         oled_off();
//     }
//     return false;
// }
// #endif

// Disable RP2040 power LED
void keyboard_pre_init_user(void) {
  setPinOutput(24);
  writePinHigh(24);
}

const rgblight_segment_t PROGMEM RGB_MAC_BASE[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,20,HSV_CHARTREUSE}
);
const rgblight_segment_t PROGMEM RGB_MAC_SYMBOL[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,20,HSV_CHARTREUSE}
);
const rgblight_segment_t PROGMEM RGB_MAC_NAVIGATION[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,20,HSV_CHARTREUSE}
);

const rgblight_segment_t PROGMEM RGB_WIN_BASE[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,20,HSV_AZURE}
);
const rgblight_segment_t PROGMEM RGB_WIN_SYMBOL[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,20,HSV_AZURE}
);
const rgblight_segment_t PROGMEM RGB_WIN_NAVIGATION[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,20,HSV_AZURE}
);

const rgblight_segment_t PROGMEM RGB_NUMPAD[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,20,HSV_PINK}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    RGB_MAC_BASE,
    RGB_MAC_SYMBOL,
    RGB_MAC_NAVIGATION,
    RGB_WIN_BASE,
    RGB_WIN_SYMBOL,
    RGB_WIN_NAVIGATION,
    RGB_NUMPAD
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
};

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, MAC_BASE));
    rgblight_set_layer_state(1, layer_state_cmp(state, MAC_SYMBOL));
    rgblight_set_layer_state(2, layer_state_cmp(state, MAC_NAVIGATION));
    rgblight_set_layer_state(3, layer_state_cmp(state, WIN_BASE));
    rgblight_set_layer_state(4, layer_state_cmp(state, WIN_SYMBOL));
    rgblight_set_layer_state(5, layer_state_cmp(state, WIN_NAVIGATION));
    rgblight_set_layer_state(6, layer_state_cmp(state, NUMPAD_RGB));
    return state;
};

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
        if (clockwise) {
            tap_code16(LSG(KC_RIGHT));
        } else {
            tap_code16(LSG(KC_LEFT));
        }
    }
    return false;
}
#endif

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    switch (combo_index) {
        case WIN_AZ_UNDO: {
            if (layer_state_is(MAC_BASE)) {
                return false;
            }
            break;
        }
        case WIN_SX_CUT: {
            if (layer_state_is(MAC_BASE)) {
                return false;
            }
            break;
        }
        case WIN_DC_COPY: {
            if (layer_state_is(MAC_BASE)) {
                return false;
            }
            break;
        }
        case WIN_FR_CLIP_HISTORY: {
            if (layer_state_is(MAC_BASE)) {
                return false;
            }
            break;
        }
        case WIN_FV_PASTE: {
            if (layer_state_is(MAC_BASE)) {
                return false;
            }
            break;
        }
        case MAC_SW_ALFRED_SNIPPET: {
            if (layer_state_is(WIN_BASE)) {
                return false;
            }
            break;
        }
        case MAC_AZ_UNDO: {
            if (layer_state_is(WIN_BASE)) {
                return false;
            }
            break;
        }
        case MAC_SX_CUT: {
            if (layer_state_is(WIN_BASE)) {
                return false;
            }
            break;
        }
        case MAC_DC_COPY: {
            if (layer_state_is(WIN_BASE)) {
                return false;
            }
            break;
        }
        case MAC_FR_ALFRED_PASTE: {
            if (layer_state_is(WIN_BASE)) {
                return false;
            }
            break;
        }
        case MAC_FV_PASTE: {
            if (layer_state_is(WIN_BASE)) {
                return false;
            }
            break;
        }
        case MAC_QA_MISSION_CTRL: {
            if (layer_state_is(WIN_BASE)) {
                return false;
            }
            break;
        }
    }
   return true;
}
