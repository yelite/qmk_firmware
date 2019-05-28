#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _BL 0
#define _FL 1
#define _CL 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */
[_BL] = LAYOUT(
  KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS, KC_GRV,        KC_PGUP,
  KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSPC,                KC_PGDN,
  KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_NO  ,KC_ENT,
  KC_LSFT,KC_NO  ,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,TT(_FL),        KC_UP,
  KC_MEH ,KC_LALT,KC_LGUI,KC_NO,        KC_SPC, KC_SPC,                         KC_NO,KC_LGUI,KC_RALT,KC_HYPR,KC_LEFT,KC_DOWN,KC_RGHT),

  /* Keymap _FL: Function Layer
   */
[_FL] = LAYOUT(
  KC_SLEP, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,KC_INS ,KC_DEL,         KC_VOLU,
  KC_CAPS,KC_BTN1,KC_MS_U,KC_BTN2,_______,_______,_______,_______,_______,KC_MPRV,KC_MPLY,KC_UP  ,_______,KC_DEL ,                KC_VOLD,
  _______,KC_MS_L,KC_MS_D,KC_MS_R,_______,_______,_______,_______,_______,_______,KC_LEFT,KC_RGHT,_______,_______,
  _______,KC_VOLD,KC_VOLU,KC_MUTE,_______,_______,_______,_______,_______,_______,_______,KC_DOWN,_______,TG(_FL),        KC_PGUP,
  _______,_______,_______,_______,        _______,_______,                        _______,KC_MPLY,KC_MFFD,KC_MRWD,KC_HOME,KC_PGDN,KC_END),

  /* Keymap _CL: Control layer
   */
[_CL] = LAYOUT(
  BL_STEP,RGB_M_P,RGB_M_B,RGB_M_R,RGB_M_SW,RGB_M_SN,RGB_M_K,RGB_M_X,RGB_M_G,_______,_______,_______,_______,_______,RGB_TOG,        RGB_VAI,
  _______,_______,_______,_______,RESET,  _______,_______,_______,_______,_______,_______,_______,_______,_______,                RGB_VAD,
  _______,_______,MO(_CL),_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
  MO(_FL),_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        RGB_SAI,
  _______,_______,_______,_______,        RGB_MOD,   RGB_MOD,                     _______,_______,MO(_FL),_______,RGB_HUD,RGB_SAD,RGB_HUI),
};
