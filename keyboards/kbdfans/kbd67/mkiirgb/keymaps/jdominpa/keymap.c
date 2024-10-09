#include QMK_KEYBOARD_H

/* Sticky mods */
#define _OS_SHFT OSM(MOD_LSFT)

/* Homerow mods */
#define _HOME_A    LT(_SYMBOLS, KC_A)
#define _HOME_S    LALT_T(KC_S)
#define _HOME_D    LCTL_T(KC_D)
#define _HOME_F    LSFT_T(KC_F)
#define _HOME_J    RSFT_T(KC_J)
#define _HOME_K    RCTL_T(KC_K)
#define _HOME_L    LALT_T(KC_L)
#define _HOME_SCLN LT(_SYMBOLS, KC_SCLN)

#define _HOME_Z    LGUI_T(KC_Z)
#define _HOME_SLSH RGUI_T(KC_SLSH)

/* Layer switching */
#define _NAV_SPC LT(_NAVIGATION, KC_SPC)
#define _TG_GAME TG(_GAMING)

/* Layers */
enum layers {
    _ALPHA,
    _GAMING,
    _SYMBOLS,
    _NAVIGATION,
    _SYSTEM,
};

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_ALPHA] = LAYOUT_65_ansi_blocker( /* Alphas layer */
		KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,      KC_6,   KC_7,     KC_8,     KC_9,     KC_0,        KC_MINS,  KC_EQL,   KC_BSPC,  KC_DEL,
		KC_TAB,    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,   KC_U,     KC_I,     KC_O,     KC_P,        KC_LBRC,  KC_RBRC,  KC_BSLS,  MO(_SYSTEM),
		KC_ESC,    _HOME_A,  _HOME_S,  _HOME_D,  _HOME_F,  KC_G,      KC_H,   _HOME_J,  _HOME_K,  _HOME_L,  _HOME_SCLN,  KC_QUOT,            KC_ENT,   _TG_GAME,
		_OS_SHFT,  _HOME_Z,  KC_X,     KC_C,     KC_V,     KC_B,      KC_N,   KC_M,     KC_COMM,  KC_DOT,   _HOME_SLSH,  _OS_SHFT,           KC_UP,    XXXXXXX,
		KC_LCTL,   KC_LGUI,  KC_LALT,                      _NAV_SPC,                    KC_RALT,            KC_RCTL,     KC_LEFT,            KC_DOWN,  KC_RIGHT),
    
	[_GAMING] = LAYOUT_65_ansi_blocker( /* Gaming layer */
		KC_ESC,   KC_1,     KC_2,     KC_3,  KC_4,  KC_5,    KC_6,  KC_7,  KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_DEL,
		KC_TAB,   KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,    KC_Y,  KC_U,  KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  MO(_SYSTEM),
		KC_LCTL,  KC_A,     KC_S,     KC_D,  KC_F,  KC_G,    KC_H,  KC_J,  KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   _TG_GAME,
		KC_LSFT,  KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,    KC_N,  KC_M,  KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,    MO(_NAVIGATION),
		KC_LCTL,  KC_LGUI,  KC_LALT,                KC_SPC,                          KC_RALT,  KC_RCTL,  KC_LEFT,            KC_DOWN,  KC_RIGHT),
    
	[_SYMBOLS] = LAYOUT_65_ansi_blocker( /* Symbol layer */
		XXXXXXX,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   XXXXXXX,  XXXXXXX,
		XXXXXXX,  KC_AT,    KC_LCBR,  KC_RCBR,  KC_BSLS,  KC_DLR,   KC_AMPR,  KC_CIRC,  KC_ASTR,  KC_SLASH, KC_PERC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  KC_QUOT,  KC_LPRN,  KC_RPRN,  KC_DQUO,  KC_SCLN,  KC_PIPE,  KC_EQL,   KC_PLUS,  KC_MINS,  KC_EXLM,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  KC_GRV,   KC_LBRC,  KC_RBRC,  KC_HASH,  KC_COLN,  KC_TILD,  KC_UNDS,  KC_LABK,  KC_RABK,  KC_QUES,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,                      XXXXXXX,            XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX),

	[_NAVIGATION] = LAYOUT_65_ansi_blocker( /* Navigation layer */
		XXXXXXX,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   XXXXXXX,  QK_BOOT,
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_ENT,   KC_BSPC,  KC_DEL,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		KC_CAPS,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,                      XXXXXXX,            XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX),

	[_SYSTEM] = LAYOUT_65_ansi_blocker( /* Media layer */
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  KC_MPLY,  KC_MPRV,  KC_MNXT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,                      XXXXXXX,            XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX),
};

// clang-format on
