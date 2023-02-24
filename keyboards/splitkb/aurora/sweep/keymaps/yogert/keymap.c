#include QMK_KEYBOARD_H
#include <keymap_swedish.h>


enum ferris_layers {
  QWER, // QWERTY base layout
  COLE, // Colemak base layout
  GAME, // For gaming
  NUM,
  SYM,
  NAV,
  F_KEYS,
  GNUM  // Modified number layer for when gaming
};


// TODO: See if you can move the gaming layer to the next to last one

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [QWER] = LAYOUT(
  //,--------------------------------------------.                    ,--------------------------------------------.
         SE_Q,    SE_W,    SE_E,    SE_R,    SE_T,                         SE_Y,    SE_U,    SE_I,    SE_O,    SE_P,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         SE_A,    SE_S,    SE_D,    SE_F,    SE_G,                         SE_H,    SE_J,    SE_K,    SE_L, SE_QUOT,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         SE_Z,    SE_X,    SE_C,    SE_V,    SE_B,                         SE_N,    SE_M, SE_COMM,  SE_DOT, SE_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                          MO(SYM),  KC_SPC,    KC_LSFT, MO(NUM)
                                      //`-----------------'  `-----------------'
  ),
  [COLE] = LAYOUT(
  //,--------------------------------------------.                    ,--------------------------------------------.
         SE_Q,    SE_W,    SE_F,    SE_P,    SE_B,                         SE_J,    SE_L,    SE_U,    SE_Y, SE_QUOT,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         SE_A,    SE_R,    SE_S,    SE_T,    SE_G,                         SE_M,    SE_N,    SE_E,    SE_I,    SE_O,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         SE_Z,    SE_X,    SE_C,    SE_D,    SE_V,                         SE_K,    SE_H, SE_COMM,  SE_DOT, SE_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                          MO(SYM),  KC_SPC,    KC_LSFT, MO(NUM)
                                      //`-----------------'  `-----------------'
  ),

  [GAME] = LAYOUT( // For gaming
  //,--------------------------------------------.                    ,--------------------------------------------.
      KC_TAB,     SE_Q,    SE_W,    SE_E,    SE_R,                         SE_Y,    SE_U,    SE_I,    SE_O,    SE_P,
  //|--------+--------+--------+--------+--------+                    |--------+--------+--------+--------+--------|
      KC_LCTL,    SE_A,    SE_S,    SE_D,    SE_F,                         SE_H,    SE_J,    SE_K,    SE_L, SE_QUOT,
  //|--------+--------+--------+--------+--------+                    |--------+--------+--------+--------+--------|
      KC_LSFT,    SE_Z,    SE_X,    SE_C,    SE_V,                         SE_N,    SE_M, SE_COMM,  SE_DOT,DF(QWER),
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                         MO(GNUM),  KC_SPC,    KC_LSFT, MO(GNUM)
                                      //`-----------------'  `-----------------'
  ),

  [SYM] = LAYOUT(
  //,-------------------------------------------.                     ,--------------------------------------------.
      SE_EXLM,   SE_AT, SE_HASH,  SE_DLR, SE_PERC,                      SE_CIRC, SE_AMPR, SE_DQUO, SE_PIPE, SE_BSLS,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_LGUI, KC_LCTL, KC_LALT,  KC_TAB, KC_LSFT,                      SE_MINS, SE_LPRN, SE_LCBR, SE_LBRC, SE_LABK,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+---------+-------|
      XXXXXXX, XXXXXXX, XXXXXXX, SE_QUES, SE_TILD,                      SE_UNDS, SE_RPRN, SE_RCBR, SE_RBRC, SE_RABK,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                          _______,  KC_SPC,    KC_LSFT, MO(NAV)
                                      //`-----------------'  `-----------------'
  ),

  [NUM] = LAYOUT(
  //,--------------------------------------------.                    ,--------------------------------------------.
      XXXXXXX,    SE_7,    SE_8,    SE_9, SE_PLUS,                      XXXXXXX, SE_ARNG, SE_ADIA, SE_ODIA, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         SE_0,    SE_4,    SE_5,    SE_6,  SE_EQL,                      KC_LSFT, KC_BSPC, KC_LALT, KC_LCTL, KC_LGUI,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      XXXXXXX,    SE_1,    SE_2,    SE_3, XXXXXXX,                      XXXXXXX, XXXXXXX, SE_COMM,  SE_DOT, SE_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                          MO(NAV),  KC_SPC,    KC_LSFT, _______
                                      //`-----------------'  `-----------------'
  ),

  [NAV] = LAYOUT(
  //,--------------------------------------------.                    ,--------------------------------------------.
      KC_RGUI, KC_RCTL, KC_RALT,  KC_TAB, KC_RSFT,                      KC_RSFT,  KC_TAB, KC_RALT, KC_RCTL, KC_RGUI,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   MO(F_KEYS), XXXXXXX,DF(QWER),DF(COLE),DF(GAME),
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                          _______,  KC_SPC,    KC_LSFT, _______
                                      //`-----------------'  `-----------------'
  ),

  [F_KEYS] = LAYOUT(
  //,--------------------------------------------.                    ,--------------------------------------------.
      XXXXXXX,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_PSCR,   KC_F4,   KC_F5,   KC_F6,  KC_F11,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      XXXXXXX,   KC_F1,   KC_F2,   KC_F3,  KC_F12,                      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                          _______,  KC_SPC,    KC_LSFT, _______
                                      //`-----------------'  `-----------------'
  ),

  [GNUM] = LAYOUT(  // Modified number layer for when gaming
  //,--------------------------------------------.                    ,--------------------------------------------.
      XXXXXXX,    SE_7,    SE_8,    SE_9,    SE_T,                      XXXXXXX, SE_ARNG, SE_ADIA, SE_ODIA, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         SE_0,    SE_4,    SE_5,    SE_6,    SE_G,                      KC_LSFT, KC_BSPC, KC_LALT, KC_LCTL, KC_LGUI,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      XXXXXXX,    SE_1,    SE_2,    SE_3,    SE_B,                      XXXXXXX, XXXXXXX, SE_COMM,  SE_DOT, SE_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                          MO(NAV),  KC_SPC,    KC_LSFT, _______
                                      //`-----------------'  `-----------------'
  )
};

// QWERTY combos
const uint16_t PROGMEM combo_escape[] = {SE_W, SE_E,    SE_R, COMBO_END};
const uint16_t PROGMEM combo_enter[]  = {SE_J, SE_K,    SE_L, COMBO_END};
const uint16_t PROGMEM combo_delete[] = {SE_M, SE_COMM,       COMBO_END};
// Colemak combos
const uint16_t PROGMEM combo_colemak_escape[] = {SE_W, SE_F,    SE_P, COMBO_END};
const uint16_t PROGMEM combo_colemak_enter[]  = {SE_N, SE_E,    SE_I, COMBO_END};
const uint16_t PROGMEM combo_colemak_delete[] = {SE_H, SE_COMM,       COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_escape,     KC_ESC),
  COMBO(combo_enter,      KC_ENT),
  COMBO(combo_delete,     KC_DEL),
  COMBO(combo_colemak_escape,     KC_ESC),
  COMBO(combo_colemak_enter,      KC_ENT),
  COMBO(combo_colemak_delete,     KC_DEL),
};