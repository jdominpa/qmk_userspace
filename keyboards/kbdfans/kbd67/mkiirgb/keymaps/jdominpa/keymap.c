#include QMK_KEYBOARD_H

/* Sticky mods */
#define OS_SHFT OSM(MOD_LSFT)

/* Layers */
#define MED_ESC LT(_MEDIA, KC_ESC)
#define NAV_SPC LT(_NAVIGATION, KC_SPC)
#define LOW_SCLN LT(_LOWER, KC_SCLN)
#define RAI_A LT(_RAISE, KC_A)
#define SYM_SPC LT(_SYMBOLS, KC_SPC)
#define TG_GAME TG(_GAMING)

enum layers {
    _ALPHA,
    _LOWER,
    _RAISE,
    _SYMBOLS,
    _NAVIGATION,
    _MEDIA,
    _GAMING,
};

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_ALPHA] = LAYOUT_65_ansi_blocker( /* Alphas layer */
		KC_GRV,   KC_1,      KC_2,          KC_3,          KC_4,          KC_5,    KC_6,   KC_7,          KC_8,          KC_9,           KC_0,      KC_MINS,  KC_EQL,  KC_BSPC,   KC_DEL,
		KC_TAB,   KC_Q,      KC_W,          KC_E,          KC_R,          KC_T,    KC_Y,   KC_U,          KC_I,          KC_O,           KC_P,      KC_LBRC,  KC_RBRC, KC_BSLS,   XXXXXXX,
		MED_ESC,  RAI_A,     LGUI_T(KC_S),  LALT_T(KC_D),  LCTL_T(KC_F),  KC_G,    KC_H,   RCTL_T(KC_J),  RALT_T(KC_K),  RGUI_T(KC_L),   LOW_SCLN,  KC_QUOT,           KC_ENT,    TG_GAME,
		OS_SHFT,  KC_Z,      KC_X,          KC_C,          LSFT_T(KC_V),  KC_B,    KC_N,   RSFT_T(KC_M),  KC_COMM,       KC_DOT,         KC_SLSH,   OS_SHFT,           KC_UP,     XXXXXXX,
		KC_LCTL,  KC_LGUI,   KC_LALT,                                     NAV_SPC,                        KC_RALT,                       KC_RCTL,   KC_LEFT,           KC_DOWN,   KC_RIGHT),
    
	[_LOWER] = LAYOUT_65_ansi_blocker( /* Lower layer */
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  KC_LCBR,  KC_RCBR,  KC_BSLS,  KC_DLR,   XXXXXXX,  KC_7,     KC_8,     KC_9,     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  KC_AT,    KC_LPRN,  KC_RPRN,  KC_DQUO,  KC_QUOT,  KC_DOT,   KC_4,     KC_5,     KC_6,     XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		OS_SHFT,  XXXXXXX,  KC_LBRC,  KC_RBRC,  KC_QUES,  KC_GRV,   XXXXXXX,  KC_1,     KC_2,     KC_3,     XXXXXXX,  OS_SHFT,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,                      SYM_SPC,                      XXXXXXX,            XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX),

	[_RAISE] = LAYOUT_65_ansi_blocker( /* Raise layer */
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  QK_BOOT,
		XXXXXXX,  XXXXXXX,  KC_F9,    KC_F8,    KC_F7,    XXXXXXX,  KC_AMPR,  KC_CIRC,  KC_EQL,   KC_PERC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  KC_F6,    KC_F5,    KC_F4,    XXXXXXX,  KC_HASH,  KC_MINS,  KC_PLUS,  KC_SLASH, KC_ASTR,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		OS_SHFT,  XXXXXXX,  KC_F3,    KC_F2,    KC_F1,    XXXXXXX,  KC_EXLM,  KC_UNDS,  KC_TILD,  KC_PIPE,  XXXXXXX,  OS_SHFT,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,                      SYM_SPC,                      XXXXXXX,            XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX),
    
	[_SYMBOLS] = LAYOUT_65_ansi_blocker( /* Symbols layer */
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  KC_LCBR,  KC_RCBR,  KC_BSLS,  KC_DLR,   KC_AMPR,  KC_CIRC,  KC_EQL,   KC_PERC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  KC_AT,    KC_LPRN,  KC_RPRN,  KC_DQUO,  KC_QUOT,  KC_DOT,   KC_MINS,  KC_PLUS,  KC_SLASH, KC_ASTR,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		OS_SHFT,  XXXXXXX,  KC_LBRC,  KC_RBRC,  KC_QUES,  KC_GRV,   KC_EXLM,  KC_UNDS,  KC_TILD,  KC_PIPE,  XXXXXXX,  OS_SHFT,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,                      XXXXXXX,            XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX),

	[_NAVIGATION] = LAYOUT_65_ansi_blocker( /* Navigation and editing layer */
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  QK_BOOT,
		XXXXXXX,  XXXXXXX,  KC_ESC,   KC_PGUP,  KC_INS,   XXXXXXX,  XXXXXXX,  KC_ENT,   KC_BSPC,  KC_DEL,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  KC_LGUI,  KC_LALT,  KC_LCTL,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  KC_RALT,  KC_PGDN,  KC_LSFT,  XXXXXXX,  XXXXXXX,  KC_TAB,   KC_HOME,  KC_END,   XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,                      XXXXXXX,            XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX),

	[_MEDIA] = LAYOUT_65_ansi_blocker( /* Media layer */
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  QK_BOOT,
		XXXXXXX,  XXXXXXX,  KC_MPLY,  KC_MPRV,  KC_MNXT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_ESC,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,                      XXXXXXX,            XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX),
    
	[_GAMING] = LAYOUT_65_ansi_blocker( /* Gaming layer */
		KC_ESC,   KC_1,          KC_2,       KC_3,    KC_4,  KC_5,    KC_6,   KC_7,   KC_8,      KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,   KC_DEL,
		KC_TAB,   KC_Q,          KC_W,       KC_E,    KC_R,  KC_T,    KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS,   XXXXXXX,
		KC_LCTL,  KC_A,          KC_S,       KC_D,    KC_F,  KC_G,    KC_H,   KC_J,   KC_K,      KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT,    TG_GAME,
		KC_LSFT,  KC_Z,          KC_X,       KC_C,    KC_V,  KC_B,    KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_SLSH,  KC_RSFT,           KC_UP,     XXXXXXX,
		KC_LCTL,  KC_LGUI,       KC_LALT,                    KC_SPC,                             KC_RALT,  KC_RCTL,  KC_LEFT,           KC_DOWN,   KC_RIGHT),
};

// clang-format on
