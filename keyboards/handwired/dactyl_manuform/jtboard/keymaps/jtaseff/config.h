
// JT's keymap config


#pragma once


// some setup for tap dancing
#define PERMISSIVE_HOLD
#undef IGNORE_MOD_TAP_INTERRUPT	// defining this has fixed the rollover issue with shift+space on one key where rolling keys would send shift.
#define TAPPING_TERM 200


#define DO_TAP(keycode) \
register_code16(keycode); \
unregister_code16(keycode)

#define DO_TAP_WITH_MOD(mod, key) \
register_code(mod); \
register_code(key); \
unregister_code(key); \
unregister_code(mod)


