#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP( ESC,	F1, F2,   F3,   F4,   F5,  F6,   F7,   F8,   F9, F10,   F11,  F12,       INS, HOME,  PGUP,\
		GRV,	1,  2,    3,    4,    5,   6,    7,    8,    9,   0,    MINS, EQL,       BSPC,        DEL,\
		TAB,  	    Q,    W,    E,    R,   T,    Y,    U,    I,   O,    P,    LBRC,      RBRC, ENT,   PGDN,\
		FN0, 	    A,    S,    D,    F,   G,    H,    J,    K,   L,    SCLN, QUOT,      NUHS,        END,\
		LSFT, 	    NUBS, Z,    X,    C,   V,    B,    N,    M,   COMM, DOT,  SLSH,      RSFT,        UP, \
		LCTL, 	    LGUI, LALT,            SPC,                         RALT, CAPS,      LEFT, RIGHT, DOWN),
/* FN1 */
		KEYMAP( TRNS,TRNS,TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,TRNS,TRNS, TRNS, TRNS, TRNS, TRNS,  				MNXT,\
	 	TRNS,	TRNS,  TRNS,    TRNS,    TRNS,    TRNS, TRNS, TRNS,  TRNS,   TRNS,  TRNS, TRNS, TRNS, TRNS,			MPRV,\
		TRNS,  	    PGUP,    UP,    PGDN, TRNS,   TRNS,    TRNS,    TRNS,    TRNS,   TRNS, TRNS, TRNS, TRNS, TRNS,   		MPLY,\
		TRNS, 	    LEFT,    DOWN,    RIGHT,    TRNS,   TRNS,    TRNS,    TRNS,    TRNS,   TRNS,    TRNS, TRNS,      TRNS,        MUTE,\
		TRNS, 	    TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS,  TRNS,        			VOLU, \
		TRNS, 	    TRNS,  TRNS,            TRNS,                         TRNS, TRNS,       TRNS, TRNS, 			VOLD),
};
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
};
