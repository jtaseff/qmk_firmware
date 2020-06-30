/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H
#include "jtboard.h"
#include "print.h"


enum layer_names {
	_QWERTY,
	_DVORAK,
	_DVERTY,
	_NAV,
	_RGBTEST,
	_MEDIA
};


// custom key codes
#define DVERTYCTL LM(_DVERTY,MOD_LCTL)



// tap dance codes
enum {
	TD_LBRC = 0,
	TD_RBRC
};






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	[_QWERTY] = LAYOUT_5x6_JT(
  // base qwerty layout
  //--------|---------+---------+---------+---------+---------+-------------|------------+-----------+---------+---------+---------+---------+-------------------------//
	KC_GESC , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,                              KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_EQL ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,                              KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_QUOT  ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	KC_LSFT , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,                              KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_MINS ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	KC_LCTL , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,                              KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , LT(_MEDIA, KC_BSLASH),
  //----------------------------------------------------------|-------------|------------|----------------------------------------------------------------------------//
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------+---------+-------------------------//
			     LALT_T(KC_DEL) , KC_LWIN ,                                                        TD(TD_LBRC) , TD(TD_RBRC) ,
  //------------------------------------------------------------------------|------------------------------------------------------------------------------------------//
  //--------+-------------------+---------|---------|-----------------------|------------------------|---------|-------------------------------------------------------//
	                      LSFT_T(KC_BSPC) , LT(_NAV, KC_ENT)  , KC_SPC,          KC_BSPC , LT(_NAV, KC_ENT)    , KC_SPC
  //--------------------------------------+---------+---------+-------------|------------------------+---------+-------------------------------------------------------//
	),


	[_DVORAK] = LAYOUT_5x6_JT(
  // base dvorak layout, where ctrl switches to qwerty for shortcuts (DVERTY)
  //--------|---------+---------+---------+---------+---------+-------------|------------+-----------+---------+---------+---------+---------+-------------------------//
	KC_GESC , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,                              KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_EQL ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	KC_TAB  , KC_QUOT , KC_COMM , KC_DOT  , KC_P    , KC_Y    ,                              KC_F    , KC_G    , KC_C    , KC_R    , KC_L    , KC_SLSH  ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	KC_LSFT , KC_A    , KC_O    , KC_E    , KC_U   , KC_I    ,                               KC_D    , KC_H    , KC_T    , KC_N    , KC_S    , KC_MINS ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
   DVERTYCTL, KC_SCLN , KC_Q    , KC_J    , KC_K   , KC_X    ,                               KC_B    , KC_M    , KC_W    , KC_V    , KC_Z    , LT(_MEDIA, KC_BSLASH),
  //----------------------------------------------------------|-------------|------------|----------------------------------------------------------------------------//
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------+---------+-------------------------//
			     LALT_T(KC_DEL) , KC_LWIN ,                                                        TD(TD_LBRC) , TD(TD_RBRC) ,
  //------------------------------------------------------------------------|------------------------------------------------------------------------------------------//
  //--------+-------------------+---------|---------|-----------------------|------------------------|---------|-------------------------------------------------------//
	                      LSFT_T(KC_BSPC) , LT(_NAV, KC_ENT)  , KC_SPC,          KC_BSPC , LT(_NAV, KC_ENT)    , KC_SPC
  //--------------------------------------+---------+---------+-------------|------------------------+---------+-------------------------------------------------------//
	),


	[_DVERTY] = LAYOUT_5x6_JT(
  // CTRL-layout for dvorak to remap shortcuts to qwerty
  //--------|---------+---------+---------+---------+---------+-------------|------------+-----------+---------+---------+---------+---------+-------------------------//
	_______ , _______ , _______ , _______ , _______ , _______ ,                              _______ , _______ , _______ , _______ , _______ , _______ ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	_______ , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,                              KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , _______  ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	_______ , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,                              KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , _______ ,
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------|---------|-------------------------//
	_______ , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,                              KC_N    , KC_M    , KC_COMM , KC_DOT  , _______ , _______,
  //----------------------------------------------------------|-------------|------------|----------------------------------------------------------------------------//
  //--------|---------|---------|---------|---------|---------|-------------|------------|-----------|---------|---------|---------+---------+-------------------------//
				        _______ , _______ ,                                                            _______ , _______ ,
  //------------------------------------------------------------------------|------------------------------------------------------------------------------------------//
  //--------+-------------------+---------|---------|-----------------------|------------------------|---------|-------------------------------------------------------//
	                              _______ , _______ , _______ ,                    _______ , _______ , _______
  //--------------------------------------+---------+---------+-------------|------------------------+---------+-------------------------------------------------------//
	),




	[_NAV] = LAYOUT_5x6_JT(
	//--------|---------+---------+---------+---------+---------+-------------------------------------+---------+---------+---------+---------+-------------------------//
	_______ , _______ , _______ , _______ , _______ , _______ ,                             _______ , _______ , _______ , _______ , _______ , DF(_DVORAK) ,
  //--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------|---------|-------------------------//
	_______ ,C(KC_HOME),KC_HOME , KC_UP   , KC_END  , C(KC_END) ,                           KC_PGUP , KC_HOME , KC_UP   , KC_END  , _______ , DF(_QWERTY) ,
  //--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------|---------|-------------------------//
	_______,C(KC_LEFT), KC_LEFT , KC_DOWN , KC_RGHT , C(KC_RGHT),                           KC_PGDN , KC_LEFT , KC_DOWN , KC_RGHT , _______ , _______ ,
  //--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------|---------|-------------------------//
	_______ , _______,_______,C(S(KC_TAB)) , C(KC_TAB), A(KC_TAB),                       _______, C(S(KC_TAB)) , C(KC_TAB),_______,_______ , _______ ,
  //------------------------------------------------------------------------------------------------------------------------------------------------------------------//
  //--------|---------|---------|---------|---------|---------|-------------------------------------|---------|---------|---------+---------+-------------------------//
                                  _______ , _______ ,                                                           _______ , _______ ,
  //------------------------------------------------------------------------------------------------------------------------------------------------------------------//
  //--------+-------------------+---------|---------|---------|-------------------------------------|---------|-------------------------------------------------------//
											_______ , _______ , _______  ,       _______ , _______  , _______
  //--------------------------------------+---------+---------+-------------------------------------+---------+-------------------------------------------------------//
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



#ifdef OLED_DRIVER_ENABLE

	void oled_task_user(void) {
		// // Host Keyboard Layer Status
		// oled_write_P(PSTR("Layer: "), false);

		// switch (get_highest_layer(layer_state)) {
			// case _QWERTY:
				// oled_write_P(PSTR("QWERTY\n"), false);
				// break;
			// case _DVERTY:
				// oled_write_P(PSTR("DVERTY\n"), false);
				// break;
			// case _MEDIA:
				// oled_write_P(PSTR("MEDIA\n"), false);
				// break;
			// case _NAV:
				// oled_write_P(PSTR("NAV\n"), false);
				// break;
			// case _DVORAK:
				// oled_write_P(PSTR("DVORAK\n"), false);
				// break;
			// default:
				// // Or use the write_ln shortcut over adding '\n' to the end of your string
				// oled_write_ln_P(PSTR("Other"), false);
		// }

		// // Host Keyboard LED Status
		// led_t led_state = host_keyboard_led_state();
		// oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
		// oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
		// oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
	}

	layer_state_t layer_state_set_user(layer_state_t state) {
		oled_write_P(PSTR("Now on : "), false);

		switch (get_highest_layer(state)) {
			case 0:
				switch (get_highest_layer(default_layer_state)) {
					case _QWERTY:
						oled_write_P(PSTR("QWERTY\n"), false);
						break;
					case _DVORAK:
					case _DVERTY:
						oled_write_P(PSTR("DVORAK\n"), false);
						break;
				}
			case _DVERTY:
				oled_write_P(PSTR("DVERTY\n"), false);
				break;
			case _MEDIA:
				oled_write_P(PSTR("MEDIA\n"), false);
				break;
			case _NAV:
				oled_write_P(PSTR("NAV\n"), false);
				break;
			default:
				// Or use the write_ln shortcut over adding '\n' to the end of your string
				oled_write_ln_P(PSTR("Other"), false);
		}
		
		// oled_write_P(sprintf("State: %d", state), false);
		uprintf("state %u, highest %u, default %u, def high %u\n", state, get_highest_layer(state), default_layer_state, get_highest_layer(default_layer_state));
		
		return state;
	}
#else
	
	layer_state_t layer_state_set_user(layer_state_t state) {
		
		switch (get_highest_layer(state)) {
			case 0:
				rgblight_sethsv(RGB_RED);
				switch (get_highest_layer(default_layer_state)) {
					case _QWERTY:
						rgblight_sethsv(HSV_BLUE);
						break;
					case _DVORAK:
					case _DVERTY:
						rgblight_sethsv(HSV_GREEN);
						break;
				}
			case _DVERTY:
				rgblight_sethsv(HSV_ORANGE);
				break;
			case _MEDIA:
				rgblight_sethsv(HSV_PURPLE);
				break;
			case _NAV:
				rgblight_sethsv(HSV_GOLD);
				break;
			default:
				// Or use the write_ln shortcut over adding '\n' to the end of your string
				rgblight_sethsv(HSV_WHITE);
		}
		
		// oled_write_P(sprintf("State: %d", state), false);
		uprintf("state %u, highest %u, default %u, def high %u\n", state, get_highest_layer(state), default_layer_state, get_highest_layer(default_layer_state));
		
		return state;
	}
	

#endif
