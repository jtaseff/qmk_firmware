/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H
#include "jtboard.h"

#define _QWERTY		0
#define _DVORAK 	1
#define _DVERTY 	2
#define _LOWER		3
#define _NAV		4
#define _RGBTEST	5
#define _MEDIA		6



// TAP DANCE SECTION

enum {
	TD_LBRC = 0,
	TD_RBRC
};






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	[_QWERTY] = LAYOUT_5x6_JT(
  //--------|---------+---------+---------+---------+---------+-------------|------------+-----------+---------+---------+---------+---------+-------------------------//
	KC_GESC , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,                              KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_MINS ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,                              KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_EQL  ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	KC_LSFT , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,                              KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	KC_LCTL , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,                              KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , LT(_MEDIA, KC_BSLASH),
  //----------------------------------------------------------|-------------|------------|----------------------------------------------------------------------------//
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------+---------+-------------------------//
				LALT_T(KC_DEL) , KC_LWIN ,                                                         TD(TD_LBRC) , TD(TD_RBRC) ,
  //------------------------------------------------------------------------|------------------------------------------------------------------------------------------//
  //--------+-------------------+---------|---------|-----------------------|------------------------|---------|-------------------------------------------------------//
	                        LSFT_T(KC_BSPC) , LT(_NAV, KC_ENT)  , KC_SPC,          KC_BSPC , LT(_NAV, KC_ENT)    , LSFT_T(KC_SPC)
  //--------------------------------------+---------+---------+-------------|------------------------+---------+-------------------------------------------------------//
	),


	[_NAV] = LAYOUT_5x6_JT(
	//--------|---------+---------+---------+---------+---------+-------------------------------------+---------+---------+---------+---------+-------------------------//
	_______ , _______ , _______ , _______ , _______ , _______ ,                             _______ , _______ , _______ , _______ , _______ , _______ ,
	//--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------|---------|-------------------------//
	_______ , _______ , KC_HOME , KC_UP   , KC_END  , KC_PGUP ,                             KC_PGUP , KC_HOME , KC_UP   , KC_END , _______ , _______ ,
	//--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------|---------|-------------------------//
	_______ , _______ , KC_LEFT , KC_DOWN , KC_RGHT , KC_PGDN ,                             KC_PGDN , KC_LEFT , KC_DOWN , KC_RGHT , _______ , _______ ,
	//--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------|---------|-------------------------//
	_______ , _______ , _______ , _______ , _______ , _______ ,                             _______ , _______ , _______ , _______ , _______ , _______ ,
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	//--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------+---------+-------------------------//
									_______ , _______ ,                                                           _______ , _______ ,
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	//--------+-------------------+---------|---------|---------|-------------------------------------|---------|-------------------------------------------------------//
											_______ , _______ , _______  ,       _______ , _______  , _______
	//--------------------------------------+---------+---------+-------------------------------------+---------+-------------------------------------------------------//
	),




/*
	[_NAV] = LAYOUT_5x6_JT(
		KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
		_______,RGB_MODE_FORWARD,RGB_TOG,_______,_______,KC_LBRC,                        KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
		_______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
		_______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD,
					_______,_______,                                                        KC_P0 , _______,
										_______,_______,_______,        _______,_______,_______
	),

*/


  [_LOWER] = LAYOUT_5x6_JT(

     KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
     _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
     _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
     _______,_______,_______,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
	                 _______,_______,                                                         KC_P0 , _______,
                                       _______,_______,_______,      _______,_______,_______

  ),


  
  [_RGBTEST] = LAYOUT_5x6_JT(
       _______,_______ , _______ , _______ , _______ , _______ ,                _______  , _______ , _______ , _______ ,_______ ,_______ ,
       _______,RGB_MODE_FORWARD,RGB_TOG,_______,_______,_______,                RGB_HUI,RGB_SAI,RGB_VAI,_______ ,_______,_______,
       _______,RGB_MODE_REVERSE,_______  ,_______,_______,_______,              RGB_HUD,RGB_SAD,RGB_VAD,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                        KC_7,_______,_______,_______,_______,_______,
	                   _______,_______,                                                        _______ , _______,
                                       _______,_______,_______,        _______,_______,_______
  ),
  
  
  
  [_MEDIA] = LAYOUT_5x6_JT(
       _______ , _______ , _______ , _______ , _______ , _______ ,				_______ , _______ , _______ , _______ , KC_BRIU , KC_VOLU ,
       _______ , _______ , _______ , _______ , _______ , _______ ,              _______ , _______ , _______ , _______ , KC_BRID , KC_VOLD ,
       _______ , _______ , _______ , _______ , _______ , _______ ,              _______ , _______ , _______ , _______ , _______ , KC_MUTE ,
       _______ , _______ , _______ , _______ , _______ , _______ ,				_______ , _______ , _______ , _______ , KC_MPLY , _______ ,
						   _______ , _______ ,                                                      _______ , _______,
                                     _______ , _______ , _______ ,        	    _______ , _______ , _______
  )
};









/*
BLANK LAYOUT

	[_LAYER] = LAYOUT_5x6_JT(
	//--------|---------+---------+---------+---------+---------+-------------------------------------+---------+---------+---------+---------+-------------------------//
	_______ , _______ , _______ , _______ , _______ , _______ ,                             _______ , _______ , _______ , _______ , _______ , _______ ,
	//--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------|---------|-------------------------//
	_______ , _______ , _______ , _______ , _______ , _______ ,                             _______ , _______ , _______ , _______ , _______ , _______ ,
	//--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------|---------|-------------------------//
	_______ , _______ , _______ , _______ , _______ , _______ ,                             _______ , _______ , _______ , _______ , _______ , _______ ,
	//--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------|---------|-------------------------//
	_______ , _______ , _______ , _______ , _______ , _______ ,                             _______ , _______ , _______ , _______ , _______ , _______ ,
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	//--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------+---------+-------------------------//
									_______ , _______ ,                                                           _______ , _______ ,
	//------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	//--------+-------------------+---------|---------|---------|-------------------------------------|---------|-------------------------------------------------------//
											| _______ , _______ , _______  ,       _______ , _______  , _______
	//--------------------------------------+---------+---------+-------------------------------------+---------+-------------------------------------------------------//
	),

*/
  
  
  
  
  
enum {
	SINGLE_TAP = 1,
	SINGLE_HOLD,
	DOUBLE_TAP,
	DOUBLE_HOLD,
	DOUBLE_SINGLE_TAP,
	TRIPLE_TAP,
	TRIPLE_HOLD,
	TRIPLE_SINGLE_TAP,
	
	NO_TAP_STATE
};

typedef struct {
	bool is_press_action;
	int state;
} tap;

int get_dance_status(qk_tap_dance_state_t *state) {
	// NOTE: Interrupted means we are trying to do separate taps

	if (state->count == 1) {
		return (state->interrupted || !state->pressed) ? SINGLE_TAP : SINGLE_HOLD;
	}
	else if (state->count == 2) {
		if (state->interrupted) 
			return DOUBLE_SINGLE_TAP;
		return state->pressed ? DOUBLE_HOLD : DOUBLE_TAP;
	} 
	else if (state->count == 3) {
		if (state->interrupted) 
			return TRIPLE_SINGLE_TAP;
		return state->pressed ? TRIPLE_HOLD : TRIPLE_TAP;
	}
	
	return NO_TAP_STATE;
}



/* 
Section for bracket tapping 
*/

// initialize an instance of 'tap' for the 'x' tap dance.
static tap brackettapL_state = { 
	.is_press_action = true,
	.state = 0
};
static tap brackettapR_state = { 
	.is_press_action = true,
	.state = 0
};

/*
	Handles the ctrl key tap dance finish event
*/
void tap_lbrc_finished(qk_tap_dance_state_t *state, void *user_data) {
	brackettapL_state.state = get_dance_status(state);
	switch (brackettapL_state.state) {
		case SINGLE_TAP: 
			DO_TAP(KC_LPRN);  // left parentheses
			break;
		case DOUBLE_TAP: 
			DO_TAP(KC_LBRC);  // left square bracket
			break;
		case TRIPLE_TAP: 
			DO_TAP(KC_LCBR);  // left curly brace
			break;
	}
}
void tap_rbrc_finished(qk_tap_dance_state_t *state, void *user_data) {
	brackettapR_state.state = get_dance_status(state);
	switch (brackettapR_state.state) {
		case SINGLE_TAP: 
			DO_TAP(KC_RPRN);
			break;
		case DOUBLE_TAP: 
			DO_TAP(KC_RBRC);
			break;
		case TRIPLE_TAP: 
			DO_TAP(KC_RCBR);
			break;
	}
}

/*
	Handles the ctrl key tap dance reset event
*/
void tap_lbrc_reset(qk_tap_dance_state_t *state, void *user_data) {
	brackettapL_state.state = 0;
}
void tap_rbrc_reset(qk_tap_dance_state_t *state, void *user_data) {
	brackettapR_state.state = 0;
}


qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_LBRC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, tap_lbrc_finished, tap_lbrc_reset),
	[TD_RBRC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, tap_rbrc_finished, tap_rbrc_reset),
	// [ESC_ALTF4] = ACTION_TAP_DANCE_FN(escape_and_altf4_tapdance)
};








/*
// example with multi function ctrl button

// Handles the ctrl key tap dance finish event
void ctrltap_finished(qk_tap_dance_state_t *state, void *user_data) {
	ctrltap_state.state = get_dance_status(state);
	switch (ctrltap_state.state) {
		case SINGLE_TAP: 
			register_code(KC_LCTL); 
			break;
		case SINGLE_HOLD: 
			register_code(KC_LCTL); 
			break;
		case DOUBLE_SINGLE_TAP: 
			DO_TAP(KC_LCTL); register_code(KC_LCTL); 
			break;
		case DOUBLE_HOLD: 
			register_code(KC_LCTL); 
			break;
		case TRIPLE_TAP: 
			register_code (KC_LCTL);	 register_code (KC_LALT);	 register_code (KC_DEL);
			break;
	}
}
// Handles the ctrl key tap dance reset event
void ctrltap_reset(qk_tap_dance_state_t *state, void *user_data) {
	switch (ctrltap_state.state) {
		case SINGLE_TAP: 
		case SINGLE_HOLD:
		case DOUBLE_HOLD:
		case DOUBLE_SINGLE_TAP:
			unregister_code(KC_LCTL); 
			break;

		case TRIPLE_TAP:
			unregister_code (KC_LCTL); unregister_code (KC_LALT); unregister_code (KC_DEL);
			break;
	}
	ctrltap_state.state = 0;
}
*/

