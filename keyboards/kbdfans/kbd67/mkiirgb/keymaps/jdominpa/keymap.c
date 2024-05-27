#include QMK_KEYBOARD_H

/* Sticky mods */
#define OS_SHFT OSM(MOD_LSFT)
#define OS_CTRL OSM(MOD_LCTL)
#define OS_ALT  OSM(MOD_LALT)
#define OS_GUI  OSM(MOD_LGUI)

/* Tab switching */
#define TAB_R C(KC_TAB)
#define TAB_L C(S(KC_TAB))

/* Editing commands */
#define UNDO C(KC_Z)
#define CUT  C(KC_X)
#define COPY C(KC_C)
#define PSTE C(KC_V)

/* Layers */
#define LA_NAV LT(NAV, KC_SPC)

enum layers {
    DEF,
    NAV,
    GAME,
};

enum combos {
    CAPS_WORD,
};

const uint16_t PROGMEM caps_word_combo[] = {RCTL_T(KC_J), RALT_T(KC_K), RGUI_T(KC_L), COMBO_END};
combo_t key_combos[] = {
    [CAPS_WORD] = COMBO(caps_word_combo, QK_CAPS_WORD_TOGGLE),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[DEF] = LAYOUT_65_ansi_blocker( /* Default */
		KC_GRV,   KC_1,      KC_2,          KC_3,          KC_4,          KC_5,    KC_6,   KC_7,          KC_8,          KC_9,           KC_0,      KC_MINS,  KC_EQL,  KC_BSPC,   KC_DEL,
		KC_TAB,   KC_Q,      KC_W,          KC_E,          KC_R,          KC_T,    KC_Y,   KC_U,          KC_I,          KC_O,           KC_P,      KC_LBRC,  KC_RBRC, KC_BSLS,   XXXXXXX,
		KC_ESC,   KC_A,      LGUI_T(KC_S),  LALT_T(KC_D),  LCTL_T(KC_F),  KC_G,    KC_H,   RCTL_T(KC_J),  RALT_T(KC_K),  RGUI_T(KC_L),   KC_SCLN,   KC_QUOT,           KC_ENT,    TG(GAME),
		OS_SHFT,  KC_Z,      KC_X,          KC_C,          KC_V,          KC_B,    KC_N,   KC_M,          KC_COMM,       KC_DOT,         KC_SLSH,   OS_SHFT,           KC_UP,     XXXXXXX,
		KC_LCTL,  KC_LGUI,   KC_LALT,                                     LA_NAV,                         KC_RALT,                       KC_RCTL,   KC_LEFT,           KC_DOWN,   KC_RIGHT),

	[NAV] = LAYOUT_65_ansi_blocker( /* Navigation and editing */
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  QK_BOOT,
		XXXXXXX,  KC_TAB,   KC_WSCH,  TAB_L,    TAB_R,    KC_VOLU,  KC_PGUP,  KC_HOME,  KC_UP,    KC_END,   KC_DEL,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX,  OS_SHFT,  OS_GUI,   OS_ALT,   OS_CTRL,  KC_VOLD,  KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_BSPC,  XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  KC_MUTE,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MSTP,  PSTE,     COPY,     CUT,      UNDO,     KC_ENT,   XXXXXXX,            XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,                      XXXXXXX,                      XXXXXXX,            XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX),

	[GAME] = LAYOUT_65_ansi_blocker( /* Gaming */
		KC_ESC,   KC_1,          KC_2,       KC_3,    KC_4,  KC_5,    KC_6,   KC_7,   KC_8,      KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,   KC_DEL,
		KC_TAB,   KC_Q,          KC_W,       KC_E,    KC_R,  KC_T,    KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS,   XXXXXXX,
		KC_LCTL,  KC_A,          KC_S,       KC_D,    KC_F,  KC_G,    KC_H,   KC_J,   KC_K,      KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT,    TG(GAME),
		KC_LSFT,  KC_Z,          KC_X,       KC_C,    KC_V,  KC_B,    KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_SLSH,  KC_RSFT,           KC_UP,     XXXXXXX,
		KC_LCTL,  KC_LGUI,       KC_LALT,                    KC_SPC,                             KC_RALT,  KC_RCTL,  KC_LEFT,           KC_DOWN,   KC_RIGHT),
};
