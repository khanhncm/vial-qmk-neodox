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
    KC_ESCAPE, KC_1,    KC_2,    KC_3,    KC_4, KC_5,                                          KC_6, KC_7,    KC_8,    KC_9,     KC_0,    KC_DEL,
    KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P, KC_B, KC_MINS,                        KC_EQL,  KC_J, KC_L,    KC_U,    KC_Y,     KC_DOT,  KC_BSPC,
    KC_SPC,    KC_A,    KC_R,    KC_S,    KC_T, KC_G, KC_BSPC,                        KC_SLSH, KC_M, KC_N,    KC_E,    KC_I,     KC_O,    KC_ENT,
    KC_GRV,    KC_Z,    KC_X,    KC_C,    KC_D, KC_V, KC_WHOM, KC_MYCM,      KC_MSEL, KC_MAIL, KC_K, KC_H,    KC_SCLN, KC_QUOT,  KC_COMM, KC_APP,
    KC_CAPS,   KC_LCMD, KC_LALT, KC_LCTL, KC_LSFT,    MO(2),   KC_LBRC,      KC_RBRC, MO(1),      KC_RSFT,    KC_RCTL, KC_RALT,  KC_RCMD, TG(1)
  ),

  [1] = LAYOUT(
    KC_8,    KC_1,    KC_2, KC_3,    KC_4, KC_5,                                          KC_6, KC_7,    KC_8,    KC_9,     KC_0,    KC_DEL,
    KC_7,    KC_LSFT, KC_Q, KC_LSFT, KC_E, KC_T, KC_N,                        KC_EQL,  KC_J, KC_L,    KC_U,    KC_Y,     KC_DOT,  KC_BSPC,
    KC_6,    KC_W,    KC_A, KC_S,    KC_D, KC_F, KC_G,                        KC_SLSH, KC_M, KC_P,    KC_E,    KC_I,     KC_O,    KC_ENT,
    KC_GRV,  KC_Z,    KC_X, KC_C,    KC_V, KC_B, KC_LALT, KC_LCTL,      KC_MSEL, KC_MAIL, KC_K, KC_H,    KC_SCLN, KC_QUOT,  KC_COMM, KC_APP,
    KC_CAPS, KC_LCMD,    KC_R, KC_INS, KC_SPC,  KC_9, KC_0,      KC_RBRC, MO(2),      KC_RSFT,    KC_RCTL, KC_RALT,  KC_RCMD, TG(0)
  ),

  [2] = LAYOUT(
    KC_ESCAPE, KC_F1,    KC_F2,    KC_F3,    KC_F4, KC_F5,                                          KC_F6, KC_F7,    KC_F8,    KC_F9,     KC_F10,    KC_DEL,
    KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P, KC_B, KC_F11,                        KC_F12,  KC_J, KC_PGDN,    KC_END,    KC_PGUP,     KC_HOME,  KC_BSPC,
    KC_SPC,    KC_A,    KC_R,    KC_S,    KC_T, KC_G, KC_BSPC,                        KC_SLSH, KC_M, KC_RIGHT,    KC_DOWN,    KC_LEFT,     KC_UP,    KC_ENT,
    KC_GRV,    KC_Z,    KC_X,    KC_C,    KC_D, KC_V, KC_WHOM, KC_MYCM,      KC_MSEL, KC_MAIL, KC_K, KC_H,    KC_SCLN, KC_QUOT,  KC_COMM, KC_APP,
    KC_CAPS,   KC_LCMD, KC_LALT, KC_LCTL, KC_LSFT,    KC_NO,   KC_LBRC,      KC_RBRC, KC_NO,      KC_RSFT,    KC_RCTL, KC_RALT,  KC_RCMD, KC_NO
  ),

};
