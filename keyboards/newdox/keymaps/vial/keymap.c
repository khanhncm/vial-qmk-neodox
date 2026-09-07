#include QMK_KEYBOARD_H
#include "oled.c"
#include "encoder.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_CAPS,  KC_1,    KC_2,    KC_3,    KC_4, KC_5,                                          KC_6,  KC_7,  KC_8,    KC_9,    KC_0,    KC_NO,
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P, KC_B, KC_MINS,                        KC_EQL,  KC_J,  KC_L,  KC_U,    KC_Y,    KC_DOT, KC_BSPC ,
    KC_SPC,  KC_A,    KC_R,    KC_S,    KC_T, KC_G, KC_BSLS,                        KC_SLSH, KC_M,  KC_N,  KC_E,    KC_I,    KC_O,  KC_ENT,
    KC_ESC,  KC_Z,    KC_X,    KC_C,    KC_D, KC_V, KC_PSCR, KC_NO,      KC_NO, KC_NO, KC_K,  KC_H,  KC_SCLN, KC_QUOT, KC_COMM, KC_DEL,
    KC_GRV, KC_LCMD, KC_LSFT, KC_LALT, MO(1),    KC_LCTL,   KC_LBRC,      KC_RBRC, KC_LCTL,        MO(1), KC_LALT, KC_LSFT, KC_LCMD, KC_NO
  ),

  [1] = LAYOUT( 
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                        KC_F6,   KC_KP_MINUS, KC_KP_ASTERISK, KC_KP_SLASH, KC_NUM_LOCK, KC_NO,
    KC_F9,   KC_6,    KC_7,    KC_8,    KC_9,    KC_BSPC, KC_F11,                     KC_F12,  KC_WH_U, KC_KP_7,     KC_KP_8,        KC_KP_9,     KC_KP_PLUS,  KC_BSPC,
    KC_F8,   KC_UP,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_ENT,  KC_F12,                     KC_SLSH, KC_WH_D, KC_KP_4,     KC_KP_5,        KC_KP_6,     KC_KP_DOT,   KC_ENT,
    KC_F7,   KC_0,    KC_COMM, KC_DOT,  KC_SLSH, KC_DEL,  TO(2),   TO(4),    KC_NO,   KC_NO,   KC_K,    KC_KP_1,     KC_KP_2,        KC_KP_3,     KC_KP_0,     KC_DEL,
    KC_F6,   KC_LGUI, KC_LSFT, KC_LALT, KC_NO,   KC_LCTL, KC_LBRC,                    KC_RBRC, KC_LCTL,   KC_NO,     KC_LALT,        KC_LSFT,     KC_LGUI,     KC_NO
  ),

  [2] = LAYOUT(
    KC_ESC, KC_1, KC_2, KC_3,    KC_4,   KC_5,                                          KC_P, KC_L,  KC_U,    KC_Y,    KC_F9,  TO(0),
    KC_8,   KC_Q, KC_F, KC_E,    KC_R,   KC_T,    KC_Y,                        KC_EQL,  KC_J, KC_BTN1,    KC_WH_D,    KC_BTN2,     KC_WH_U,  KC_BSPC,
    KC_7,   KC_W, KC_A, KC_S,    KC_D,   KC_G,    KC_H,                        KC_SLSH, KC_M, KC_MS_R,    KC_MS_D,    KC_MS_L,     KC_MS_U,    KC_ENT,
    KC_6,   KC_Z, KC_X, KC_C,    KC_V,   KC_B,    KC_PSCR, MO(3),      KC_NO, KC_NO, KC_K, KC_H,    KC_P, KC_I,  KC_O, KC_DEL,
    KC_TAB, KC_9, KC_0, KC_LALT, KC_SPC, KC_Z, KC_LCTL,                KC_RBRC, KC_BTN2,   KC_BTN1, KC_LALT, KC_LSFT, KC_LCMD, KC_NO
  ),

  [3] = LAYOUT(
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_F4, KC_F5,                                          KC_F6, KC_F7,    KC_F8,    KC_F9,     KC_F10,    KC_NO,
    KC_F8,   KC_U, KC_I, KC_O, KC_P, KC_Y, KC_F11,                        KC_F12,  KC_J, KC_PGDN,    KC_END,    KC_PGUP,     KC_HOME,  KC_BSPC,
    KC_F7,   KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_F12,                        KC_SLSH, KC_M, KC_RIGHT,  KC_DOWN,    KC_LEFT,     KC_UP,    KC_ENT,
    KC_F6,   KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_V, TO(0), KC_NO,      KC_MSEL, KC_MAIL, KC_K,KC_VOLU,  KC_MUTE, KC_VOLD,KC_NO, KC_DEL,
    KC_CAPS, KC_F9, KC_F10, KC_F7, KC_NO,    KC_F6,   KC_LBRC,            KC_RBRC, KC_LCTL,       KC_NO, KC_LALT, KC_LSFT, KC_LCMD,   KC_NO
  ),

  [4] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                                    KC_P,    KC_L,    KC_U,    KC_Y,    KC_F9,   TO(0),
    KC_TAB,  KC_R,    KC_J,    KC_F,    KC_E,    KC_T,    KC_KP_7,                                  KC_EQL,  KC_J,    KC_BTN1, KC_WH_D, KC_BTN2, KC_WH_U, KC_BSPC,
    KC_Q,    KC_W,    KC_A,    KC_S,    KC_D,    KC_G,    KC_KP_6,                                  KC_SLSH, KC_M,    KC_MS_R, KC_MS_D, KC_MS_L, KC_MS_U, KC_ENT,
    KC_KP_0, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT, MO(5),                  KC_WH_U, KC_WH_D, KC_K,    KC_H,    KC_P,    KC_I,    KC_O,    KC_DEL,
    KC_CAPS, KC_LGUI, KC_LSFT, KC_LALT, KC_SPC,  KC_LCTL, KC_KP_1,                                  KC_RBRC, KC_BTN1, KC_BTN2, KC_LALT, KC_LSFT, KC_LGUI, KC_NO
  ),

  [5] = LAYOUT(
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,
    KC_F9,   KC_P,    KC_Y,    KC_U,    KC_L,    KC_J,    KC_F11,                       KC_F12, KC_J,    KC_PGDN, KC_END,  KC_PGUP, KC_HOME, KC_BSPC,
    KC_F8,   KC_O,    KC_I,    KC_P,    KC_R,    KC_M,    KC_F12,                       KC_SLSH,KC_M,    KC_RIGHT,KC_DOWN, KC_LEFT, KC_UP,   KC_ENT,
    KC_F7,   KC_SLSH, KC_DOT,  KC_COMM, KC_H,    KC_K,    TO(0),   KC_NO,      KC_MSEL, KC_MAIL,KC_K,   KC_VOLU, KC_MUTE, KC_VOLD, KC_NO,   KC_DEL,
    KC_F6,   KC_F9,   KC_F10,  KC_F7,   KC_NO,   KC_F6,   KC_LBRC,                         KC_RBRC,KC_LCTL, KC_NO,   KC_LALT, KC_LSFT, KC_LGUI, KC_NO
  )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {    
        char str[100];
        sprintf(str, "%d\n", keycode);
        oled_write_ln(str, false);
    }
    return true;
}