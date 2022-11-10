/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>
#include <keymap_swedish.h>

  // Todo:
    // Combos
    // Scandinavian letters at top right on layer 2?
    // Sticky modifier keys
    // Gaming layer?
    // There is something wrong with the blank keys and the custom keymaps, will have to look into this later// There is something wrong with the blank keys and the custom keymaps, will have to look into this later
  // Minor Todos:
    // Two SE_MINS
    // Clean up the controls and modifiers that are laying around as doubles
    // Remove edge columns and inner thumbs

enum custom_keycodes{
    WIN_OH = SAFE_RANGE,
    WIN_EH,
    WIN_EUH
};

// Is this needed?
//void matrix_init_user(void) {
    //set_unicode_input_mode(UC_WIN);
//};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    SE_Q,    SE_W,    SE_E,    SE_R,    SE_T,                         SE_Y,    SE_U,    SE_I,    SE_O,   SE_P,  SE_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    SE_A,    SE_S,    SE_D,    SE_F,    SE_G,                         SE_H,    SE_J,    SE_K,    SE_L, SE_QUOT, SE_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    SE_Z,    SE_X,    SE_C,    SE_V,    SE_B,                         SE_N,    SE_M, SE_COMM,  SE_DOT, SE_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,  KC_SPC,   MO(1),      MO(2), KC_LSFT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, SE_EXLM,   SE_AT, SE_HASH,  SE_DLR, SE_PERC,                      SE_CIRC, SE_AMPR, SE_DQUO, SE_PIPE, SE_BSLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LCTL, KC_LALT,  KC_TAB, KC_LSFT,                      SE_MINS, SE_LPRN, SE_LCBR, SE_LABK, SE_LBRC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, SE_TILD,                      SE_UNDS, SE_RPRN, SE_RCBR, SE_RABK, SE_RBRC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,  KC_SPC, _______,      MO(3), KC_LSFT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX,    SE_7,    SE_8,    SE_9, SE_PLUS,                      XXXXXXX, SE_ARNG, SE_ADIA, SE_ODIA, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,    SE_4,    SE_5,    SE_6,  SE_EQL,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,    SE_1,    SE_2,    SE_3,    SE_0,                       KC_DEL, KC_BSPC, SE_COMM,  SE_DOT, SE_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,  KC_SPC,   MO(3),    _______, KC_LSFT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_RGUI, KC_RCTL, KC_RALT,  KC_TAB, KC_RSFT,                      KC_RSFT,  KC_TAB, KC_RALT, KC_RCTL, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LCTL, KC_LALT,  KC_TAB, KC_LSFT,                      KC_LSFT,  KC_TAB, KC_LALT, KC_LCTL, KC_LGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        MO(4), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   DF(5),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,  KC_SPC, _______,    _______, KC_LSFT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_PSCR,   KC_F4,   KC_F5,   KC_F6,  KC_F11,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,   KC_F1,   KC_F2,   KC_F3,  KC_F12,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,   MO(1),  KC_SPC,    KC_LSFT,   MO(2), XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

// Gaming layer
  [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    SE_Q,    SE_W,    SE_E,    SE_R,    SE_T,                         SE_Y,    SE_U,    SE_I,    SE_O,   SE_P,  SE_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    SE_A,    SE_S,    SE_D,    SE_F,    SE_G,                         SE_H,    SE_J,    SE_K,    SE_L, SE_QUOT, SE_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    SE_Z,    SE_X,    SE_C,    SE_V,    SE_B,                         SE_N,    SE_M, SE_COMM,  SE_DOT, SE_SLSH,   DF(0),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,  KC_SPC,   MO(2),    XXXXXXX, KC_LSFT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};


const uint16_t PROGMEM combo_escape[]     = {SE_W, SE_E, SE_R, COMBO_END};
const uint16_t PROGMEM combo_enter[]      = {SE_J, SE_K, SE_L, COMBO_END};
const uint16_t PROGMEM combo_backspace[]  = {SE_U, SE_I, SE_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_escape,     KC_ESC),
  COMBO(combo_enter,      KC_ENT),
  COMBO(combo_backspace,  KC_BSPC),
};

//void tap_key(uint16_t keycode) {
//  register_code(keycode);
//  unregister_code(keycode);
//}
//
//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//  switch(keycode) {
//    case WIN_OH: // å and Å
//      if (record->event.pressed) {
//        uint8_t temp_mod = get_mods();
//        clear_mods();
//        register_code(SE_LALT);
//        if (temp_mod & MODS_SHIFT_MASK) {
//          tap_key(SE_P1); tap_key(SE_P4); tap_key(SE_P3); // Å
//        } else {
//          tap_key(SE_P1); tap_key(SE_P3); tap_key(SE_P4); // å
//        }
//        unregister_code(SE_LALT);
//        return false;
//      }
//      break;
//    case WIN_EH: // ä and Ä
//      if (record->event.pressed) {
//        uint8_t temp_mod = get_mods();
//        clear_mods();
//        register_code(SE_LALT);
//        if (temp_mod & MODS_SHIFT_MASK) {
//          tap_key(SE_P1); tap_key(SE_P4); tap_key(SE_P2); // Ä
//        } else {
//          tap_key(SE_P1); tap_key(SE_P3); tap_key(SE_P2); // ä
//        }
//        unregister_code(SE_LALT);
//        return false;
//      }
//      break;
//    case WIN_EUH: // ö and Ö
//      if (record->event.pressed) {
//        uint8_t temp_mod = get_mods();
//        clear_mods();
//        register_code(SE_LALT);
//        if (temp_mod & MODS_SHIFT_MASK) {
//          tap_key(SE_P1); tap_key(SE_P5); tap_key(SE_P3); // Ö
//        } else {
//          tap_key(SE_P1); tap_key(SE_P4); tap_key(SE_P8); // ö
//        }
//        unregister_code(SE_LALT);
//        return false;
//      }
//      break;
//  }
//  return true;
//}
