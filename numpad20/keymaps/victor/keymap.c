#include QMK_KEYBOARD_H

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif 
  return true;

}
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_LEFT, KC_RGHT, KC_UP,   KC_DOWN, \
    KC_P7,   KC_P8,   KC_P9,   KC_PLUS, \
    KC_P4,   KC_P5,   KC_P6,   KC_MINS, \
    KC_P1,   KC_P2,   KC_P3,   KC_ENT, \
    KC_P0,   KC_DOT,  KC_RGHT, RGB_TOG \
  )

};
