#include QMK_KEYBOARD_H

enum {
	BASE,
	GAMING,
	NAV
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT_65_ansi_blocker( /* Base */
		KC_GRV,   KC_1,          KC_2,                         KC_3,          KC_4,  KC_5,    KC_6,          KC_7,          KC_8,          KC_9,             KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,   KC_DEL,
		KC_TAB,   KC_Q,          KC_W,                         KC_E,          KC_R,  KC_T,    KC_Y,          KC_U,          KC_I,          KC_O,             KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS,   KC_PGUP,
		KC_ESC,   LGUI_T(KC_A),  LALT_T(KC_S),  LCTL_T(KC_D),  LSFT_T(KC_F),  KC_G,  KC_H,    RSFT_T(KC_J),  RCTL_T(KC_K),  RALT_T(KC_L),  RGUI_T(KC_SCLN),            KC_QUOT,           KC_ENT,    KC_PGDN,
		MO(2),    KC_Z,          KC_X,                         KC_C,          KC_V,  KC_B,    KC_N,          KC_M,          KC_COMM,       KC_DOT,           KC_SLSH,  MO(2),             KC_UP,     TG(1),
		KC_LCTL,  KC_LGUI,       KC_LALT,                                            KC_SPC,                                KC_RALT,                         KC_RCTL,  KC_LEFT,           KC_DOWN,   KC_RIGHT),

	[GAMING] = LAYOUT_65_ansi_blocker( /* Gaming */
		KC_ESC,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
		KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_TRNS,  KC_TRNS,  KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_TRNS,           KC_TRNS,  KC_TRNS,
		KC_LSFT,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_RSFT,           KC_TRNS,  TG(1),
		KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,                      KC_TRNS,            KC_TRNS,  KC_TRNS,           KC_TRNS,  KC_TRNS),

	[NAV] = LAYOUT_65_ansi_blocker( /* Navigation, mouse and function keys */
		KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,  KC_NO,  KC_NO,
		KC_MUTE,  KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,  KC_MSTP,  KC_PGUP,  KC_HOME,  KC_UP,    KC_END,   KC_DEL,   KC_NO,    KC_NO,   KC_NO,  KC_NO,
		KC_CAPS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_ENT,   KC_NO,             KC_NO,  KC_NO,
		KC_NO,    KC_UNDO,  KC_CUT,   KC_COPY,  KC_PSTE,  KC_NO,    KC_NO,    KC_WH_L,  KC_WH_D,  KC_WH_U,  KC_BSPC,  KC_NO,             KC_NO,  KC_NO,
		KC_NO,    KC_NO,    KC_NO,                        KC_MPLY,                      KC_NO,              KC_NO,    KC_NO,             KC_NO,  KC_NO),
};
