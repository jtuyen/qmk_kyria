# Kyria 40% Keyboard Config
This configuration is an ongoing process of discovering new QMK features and diving into the realm of customizing the key layout according to my own daily workflow.

![keyboard image](https://raw.githubusercontent.com/jtuyen/qmk_kyria/main/splitkb.jpeg)

A high level overview of customized keys:
- Enabled Tap Dance
  - Single tap (, Double tap [
  - Single tap ), Double tap ]
  - Single tap Left CTRL, Double tap Space
- Enabled Chording aka Combos
  - AZ keys triggers Undo
  - SW keys triggers Alfred Snippet
  - SX keys triggers Cut
  - DC keys triggers Copy
  - FR keys triggers Alfred Paste
  - FV keys triggers Paste
  - AF keys triggers Tmux Leader key
  - ;' keys triggers Enter
  - VB keys triggers Left Curly
  - NM keys triggers Right Curly
- Mod-Tap
  - Hyper Key / ESC
- Modifiers
  - Left GUI Movement Key (Cursor movement)
  - Left Shift Left GUI Movement Key (Cursor highlight movement)
  - Left Shift Left GUI + 4 (Screenshot)
- One Shot Mods
  - Left Shift
  - Right CTRL
- Quad layers
  - Main
  - Symbols
  - Navigation
  - Numpad+RGB

View below section in raw ascii format:

/* ,-----------------------------------------.                              ,-----------------------------------------.
 * | TAB  |  Q   |  W   |  E   |  R   |  T   |                              |  Y   |  U   |  I   |  O   |  P   | BSPC |
 * |------+------+------+------+------+------|                              |------+------+------+------+------+------|
 * |ALL_T(|  A   |  S   |  D   |  F   |  G   |                              |  H   |  J   |  K   |  L   | SCLN | QUOT |
 * |------+------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------+------|
 * |OSM(MO|  Z   |  X   |  C   |  V   |  B   |TD(TD_|TD(TD_|  |TD(TD_| MINS |  N   |  M   | COMM | DOT  | SLSH | BSLS |
 * `------+------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------+------'
 *                      | MUTE | LGUI | LALT | ENT  |MO(2) |  |MO(1) | SPC  |OSM(MO| DEL  | MPLY |
 *                      |      |      |      |      |      |  |      |      |      |      |      |
 *                      `----------------------------------'  `----------------------------------'
 *                                                                               generated by [keymapviz] */

/* ,-----------------------------------------.                              ,-----------------------------------------.
 * | GRV  |  1   |  2   |  3   |  4   |  5   |                              |  6   |  7   |  8   |  9   |  0   | BSPC |
 * |------+------+------+------+------+------|                              |------+------+------+------+------+------|
 * |QK_GES| EXLM |  AT  | HASH | DLR  | PERC |                              | CIRC | AMPR | ASTR | LPRN | RPRN | MINS |
 * |------+------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------+------|
 * |OSM(MO|      |      |      |      | LBRC |      |      |  |      |      | RBRC |      | COMM | DOT  | SLSH | EQL  |
 * `------+------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------+------'
 *                      |      |      |      |      |TO(0) |  |      |      |      |      |      |
 *                      |      |      |      |      |      |  |      |      |      |      |      |
 *                      `----------------------------------'  `----------------------------------'
 *                                                                               generated by [keymapviz] */

/* ,-----------------------------------------.                              ,-----------------------------------------.
 * | TAB  |  Q   |  W   |  E   |  R   |  T   |                              |LGUI(K|      | PGUP |LGUI(K|      | BSPC |
 * |------+------+------+------+------+------|                              |------+------+------+------+------+------|
 * | ESC  |  A   |  S   |  D   |  F   |  G   |                              | LEFT | DOWN |  UP  | RGHT |      |LSG(KC|
 * |------+------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------+------|
 * |OSM(MO|  Z   |  X   |  C   |  V   |  B   |      |      |  |      |      |LSG(KC|      | PGDN |LSG(KC| MRWD | MFFD |
 * `------+------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------+------'
 *                      |      |      |      |      |      |  |TO(3) |      |      |      |      |
 *                      |      |      |      |      |      |  |      |      |      |      |      |
 *                      `----------------------------------'  `----------------------------------'
 *                                                                               generated by [keymapviz] */

/* ,-----------------------------------------.                              ,-----------------------------------------.
 * |      |      |      |      |      |      |                              | NUM  |  P7  |  P8  |  P9  | PDOT | BSPC |
 * |------+------+------+------+------+------|                              |------+------+------+------+------+------|
 * |RGB_VA|RGB_SP|RGB_M_|RGB_HU|RGB_SA|      |                              | PENT |  P4  |  P5  |  P6  | PMNS | PSLS |
 * |------+------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------+------|
 * |RGB_VA|RGB_SP|RGB_M_|RGB_HU|RGB_SA|      |      |      |  |      |      | PEQL |  P1  |  P2  |  P3  | PPLS | PAST |
 * `------+------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------+------'
 *                      |      |RGB_TO|      |      |TO(0) |  |TO(3) |      |      |  P0  |      |
 *                      |      |      |      |      |      |  |      |      |      |      |      |
 *                      `----------------------------------'  `----------------------------------'
 *                                                                               generated by [keymapviz] */
