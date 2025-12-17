#include QMK_KEYBOARD_H

#include "keymap_uk.h"

enum layer_number {
  _QWERTY = 0,
  _MOV,
  _SYM,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |BackSP|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |RShift|
 * |------+------+------+------+------+------| Enter |    | Enter |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |  /   |RCTRL |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |  MOV | /Space  /       \Enter \  |  SYM |BackSP| LAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
*                   `----------------------------'           '------''--------------------'
 */
 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RSFT,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_ENT,   KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
                        KC_LALT, KC_LGUI, MO(_MOV), KC_SPC, KC_ENT, MO(_SYM), KC_BSPC, KC_LALT
),

/* MOVEMENT
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | PgUp |BackSp|  Up  | Del  |PgDown|                    |   *  |   7  |   8  |   9  |  -   |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Home | Left | Down |Right | End  |-------.    ,-------|   /  |   4  |   5  |   6  |  +   |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |Insert|      |      |      |      |-------|    |-------|   0  |   1  |   2  |   3  |  .   |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |  MOV | /Space  /       \Enter \  | SYM  |BackSP| LAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_MOV] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, KC_PGUP, KC_BSPC, KC_UP  , KC_DEL,  KC_PGDN,                   KC_PAST, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, _______,
  _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,                    KC_PSLS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______,
  _______, KC_INS , _______, _______, _______, _______, _______, _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT, _______,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),

/* SYMBOLS
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |  @   |M Prev|M Play|M Next|M Stop|                    | V Do | Mute | V Up |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  '   |  (   |  =   |  )   |  -   |                    |      |      |      |      |  UE  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  #   |  [   |  |   |  ]   |  +   |-------.    ,-------|      |      |      |      |  OE  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |  \   |  {   |  &   |  }   |  /   |-------|    |-------|      |      |      |      |  AE  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |  MOV | /Space  /       \Enter \  |  SYM |BackSP| LAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_SYM] = LAYOUT(
   KC_GRV, UK_AT,   KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP,                     KC_VOLD, KC_MUTE, KC_VOLU, _______, _______, _______,
  _______, KC_QUOT, KC_LPRN, KC_EQL , KC_RPRN, KC_MINS,                     _______, _______, _______, _______, _______, _______,
  _______, KC_NUHS, KC_LBRC, UK_PIPE, KC_RBRC, KC_PLUS,                     _______, _______, _______, _______, _______, _______,
  _______, KC_NUBS, KC_LCBR, KC_AMPR, KC_RCBR, KC_SLSH,  _______, _______,  _______, _______, _______, _______, _______, _______,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),

/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI | MOV  | /Space  /       \Enter \  | SYM  |BackSP| LAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _MOV, _SYM, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false)
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
