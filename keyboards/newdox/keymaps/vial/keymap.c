 /* Copyright HarshitGoel96 2020
  * With permission from mattdibi, the original maintainer of the Redox hardware.
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
  */ 
#include QMK_KEYBOARD_H
#include "oled.c"
#include "encoder.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_CAPS,  KC_1,    KC_2,    KC_3,    KC_4, KC_5,                                          KC_6,  KC_7,  KC_8,    KC_9,    KC_0,    KC_NO,
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P, KC_B, KC_MINS,                        KC_EQL,  KC_J,  KC_L,  KC_U,    KC_Y,    KC_DOT, KC_BSPC ,
    KC_SPC,  KC_A,    KC_R,    KC_S,    KC_T, KC_G, KC_BSLS,                        KC_SLSH, KC_M,  KC_N,  KC_E,    KC_I,    KC_O,  KC_ENT,
    KC_ESC,  KC_Z,    KC_X,    KC_C,    KC_D, KC_V, KC_NO, KC_NO,      KC_NO, KC_NO, KC_K,  KC_H,  KC_SCLN, KC_QUOT, KC_COMM, KC_DEL,
    KC_GRV, KC_LCMD, KC_LSFT, KC_LALT, MO(1),    KC_LCTL,   KC_LBRC,      KC_RBRC, KC_LCTL,        MO(1), KC_LALT, KC_LSFT, KC_LCMD, KC_NO
  ),

  [1] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4, KC_F5,                                          KC_F6, KC_F7,    KC_F8,    KC_F9,     KC_F10,    KC_NO,
    KC_TAB,  KC_HOME, KC_PGUP, KC_END, KC_PGDN, KC_BSPC, KC_F11,                        KC_F12,  KC_J, KC_PGDN,    KC_END,    KC_PGUP,     KC_HOME,  KC_BSPC,
    KC_SPC,  KC_DOWN, KC_LEFT, KC_UP, KC_RIGHT, KC_ENT, KC_NO,                        KC_SLSH, KC_M, KC_RIGHT,  KC_DOWN,    KC_LEFT,     KC_UP,    KC_ENT,
    KC_GRV,  KC_NO, KC_VOLD, KC_MUTE, KC_VOLU, KC_DEL, TO(2), TO(4),      KC_NO, KC_NO, KC_K,KC_VOLU,  KC_MUTE, KC_VOLD, KC_NO, KC_DEL,
    KC_CAPS, KC_LCMD, KC_LSFT, KC_LALT, KC_NO,    KC_LCTL,   KC_LBRC,            KC_RBRC, KC_LCTL,       KC_NO, KC_LALT, KC_LSFT, KC_LCMD,   KC_NO
  ),

  [2] = LAYOUT(
    KC_TAB, KC_ESC,  KC_2, KC_3,    KC_4,   KC_5,                                          KC_P, KC_L,  KC_U,    KC_Y,    KC_F9,  KC_NO,
    KC_6,   KC_LSFT, KC_E, KC_LSFT, KC_E,   KC_R,    KC_T,                        KC_EQL,  KC_J, KC_BTN1,    KC_WH_D,    KC_BTN2,     KC_WH_U,  KC_BSPC,
    KC_1,   KC_S,    KC_A, KC_W,    KC_D,   KC_F,    KC_G,                        KC_SLSH, KC_M, KC_MS_R,    KC_MS_D,    KC_MS_L,     KC_MS_U,    KC_ENT,
    KC_7,   KC_Z,    KC_X, KC_C,    KC_V,   KC_B,    KC_N, MO(3),      KC_NO, KC_NO, KC_K, KC_H,    KC_P, KC_I,  KC_O, KC_DEL,
    KC_Q,   KC_8,    KC_9, KC_0,    KC_SPC, KC_LCTL, KC_LALT,                KC_RBRC, KC_BTN2,   KC_BTN1, KC_LALT, KC_LSFT, KC_LCMD, KC_NO
  ),

  [3] = LAYOUT(
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_F4, KC_F5,                                          KC_F6, KC_F7,    KC_F8,    KC_F9,     KC_F10,    KC_NO,
    KC_F9,  KC_P, KC_O, KC_I, KC_U, KC_Y, KC_F11,                        KC_F12,  KC_J, KC_PGDN,    KC_END,    KC_PGUP,     KC_HOME,  KC_BSPC,
    KC_F8,  KC_INS, KC_L, KC_K, KC_J, KC_H, KC_F12,                        KC_SLSH, KC_M, KC_RIGHT,  KC_DOWN,    KC_LEFT,     KC_UP,    KC_ENT,
    KC_GRV,  KC_SLSH, KC_DOT, KC_COMM, KC_M, KC_V, TO(0), KC_NO,      KC_MSEL, KC_MAIL, KC_K,KC_VOLU,  KC_MUTE, KC_VOLD,KC_NO, KC_DEL,
    KC_CAPS, KC_LCMD, KC_F8, KC_F7, KC_NO,    KC_F6,   KC_LBRC,            KC_RBRC, KC_LCTL,       KC_NO, KC_LALT, KC_LSFT, KC_LCMD,   KC_NO
  ),

  [4] = LAYOUT(
    KC_TAB, KC_ESC,   KC_2,    KC_3,    KC_4, KC_5,                                          KC_P, KC_L,  KC_U,    KC_Y,    KC_F9,  KC_NO,
    KC_8,   KC_1, KC_Q, KC_LSFT, KC_E, KC_T, KC_INS,                        KC_EQL,  KC_J, KC_BTN1,    KC_WH_D,    KC_BTN2,     KC_WH_U,  KC_BSPC,
    KC_7,   KC_S, KC_A, KC_W,    KC_D, KC_F, KC_END,                        KC_SLSH, KC_M, KC_MS_R,    KC_MS_D,    KC_MS_L,     KC_MS_U,    KC_ENT,
    KC_6,   KC_Z, KC_X, KC_C,    KC_V, KC_B, KC_LALT, MO(5),      KC_NO, KC_NO, KC_K, KC_H,    KC_P, KC_I,  KC_O, KC_DEL,
    KC_R,   KC_9, KC_0, KC_G, KC_SPC,  KC_N, KC_END,                KC_RBRC, KC_BTN2,   KC_BTN1, KC_LALT, KC_LSFT, KC_LCMD, KC_NO
  ),

  [5] = LAYOUT(
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_F4, KC_F5,                                          KC_F6, KC_F7,    KC_F8,    KC_F9,     KC_F10,    KC_NO,
    KC_F9,  KC_P, KC_O, KC_I, KC_U, KC_Y, KC_F11,                        KC_F12,  KC_J, KC_PGDN,    KC_END,    KC_PGUP,     KC_HOME,  KC_BSPC,
    KC_F8,  KC_INS, KC_L, KC_K, KC_J, KC_H, KC_F12,                        KC_SLSH, KC_M, KC_RIGHT,  KC_DOWN,    KC_LEFT,     KC_UP,    KC_ENT,
    KC_GRV,  KC_SLSH, KC_DOT, KC_COMM, KC_M, KC_V, TO(0), KC_NO,      KC_MSEL, KC_MAIL, KC_K,KC_VOLU,  KC_MUTE, KC_VOLD,KC_NO, KC_DEL,
    KC_CAPS, KC_LCMD, KC_F8, KC_F7, KC_NO,    KC_F6,   KC_LBRC,            KC_RBRC, KC_LCTL,       KC_NO, KC_LALT, KC_LSFT, KC_LCMD,   KC_NO
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