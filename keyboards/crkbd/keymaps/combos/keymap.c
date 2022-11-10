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

  // Todo:
    // Combos
    // Scandinavian letters at top right on layer 2?
    // Sticky modifier keys
    // Gaming layer?
    // There is something wrong with the blank keys and the custom keymaps, will have to look into this later// There is something wrong with the blank keys and the custom keymaps, will have to look into this later
  // Minor Todos:
    // Two KC_MINS
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
      XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_QUOT, KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,  KC_SPC,   MO(1),      MO(2), KC_LSFT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_BSLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LCTL, KC_LALT,  KC_TAB, KC_LSFT,                      KC_MINS, KC_ASTR, KC_LCBR, KC_RCBR, KC_SCLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TILD,                      KC_UNDS, KC_COLN, KC_LBRC, KC_RBRC, KC_PIPE, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,  KC_SPC, _______,      MO(3), KC_LSFT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX,    KC_7,    KC_8,    KC_9, KC_PLUS,                      XXXXXXX,  WIN_OH,  WIN_EH, WIN_EUH, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,    KC_4,    KC_5,    KC_6,  KC_EQL,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_0,                       KC_DEL, KC_BSPC, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
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
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_QUOT, KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   DF(0),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,  KC_SPC,   MO(2),    XXXXXXX, KC_LSFT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};


const uint16_t PROGMEM combo_escape[]     = {KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_enter[]      = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_backspace[]  = {KC_U, KC_I, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_escape,     KC_ESC),
  COMBO(combo_enter,      KC_ENT),
  COMBO(combo_backspace,  KC_BSPC),
};

void tap_key(uint16_t keycode) {
  register_code(keycode);
  unregister_code(keycode);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case WIN_OH: // å and Å
      if (record->event.pressed) {
        uint8_t temp_mod = get_mods();
        clear_mods();
        register_code(KC_LALT);
        if (temp_mod & MODS_SHIFT_MASK) {
          tap_key(KC_P1); tap_key(KC_P4); tap_key(KC_P3); // Å
        } else {
          tap_key(KC_P1); tap_key(KC_P3); tap_key(KC_P4); // å
        }
        unregister_code(KC_LALT);
        return false;
      }
      break;
    case WIN_EH: // ä and Ä
      if (record->event.pressed) {
        uint8_t temp_mod = get_mods();
        clear_mods();
        register_code(KC_LALT);
        if (temp_mod & MODS_SHIFT_MASK) {
          tap_key(KC_P1); tap_key(KC_P4); tap_key(KC_P2); // Ä
        } else {
          tap_key(KC_P1); tap_key(KC_P3); tap_key(KC_P2); // ä
        }
        unregister_code(KC_LALT);
        return false;
      }
      break;
    case WIN_EUH: // ö and Ö
      if (record->event.pressed) {
        uint8_t temp_mod = get_mods();
        clear_mods();
        register_code(KC_LALT);
        if (temp_mod & MODS_SHIFT_MASK) {
          tap_key(KC_P1); tap_key(KC_P5); tap_key(KC_P3); // Ö
        } else {
          tap_key(KC_P1); tap_key(KC_P4); tap_key(KC_P8); // ö
        }
        unregister_code(KC_LALT);
        return false;
      }
      break;
  }
  return true;
}
