
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// .................................................................. Short Cuts

  // .-----------------------------------------------------------------------------------.
  // |      |      | Copy | Paste|      |      |      |      |      |      |      |      |
  // |--------------------------------------------------------------+------+------+------|
  // | Undo |  Cut | Copy | Paste|      |      |      |      | PRIV |  PUB |      |      |
  // |-----------------------------------------------------------------------------------|
  // |      |      |  Nak |  Eot |      |      |      |      |      |      |      |      |
  // |-----------------------------------------------------------------------------------|
  // |      |      |      |      |      |      |  f() |      |      |      |      |      |
  // |      |      |      |      |      |      |      |  f() |      |      |      |      | see _PLOVER
  // '-----------------------------------------------------------------------------------'

  [_EDIT] = LAYOUT_planck_grid(
    _______, _______, TMCOPY,  TMPASTE, _______, _______, _______, _______, _______, _______, _______, _______,
    UNDO,    CUT,     COPY,    PASTE,   _______, _______, _______, _______, TD_PRIV, TD_SEND, _______, _______,
    _______, _______, NAK,     EOT,     _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, ___fn__, ___fn__, _______, _______, _______, _______
  ),

// ................................................................ Adjust Layer

  // ,-----------------------------------------------------------------------------------.
  // |Plover|      |      |      |      |      |      |      |      |      |      |      |
  // |------+------+------+------+------+-------------+------+------+------+------+------|
  // |Aud on|      |      |      |      |      |      |      |      |      |      |      |
  // |------+------+------+------+------+------|------+------+------+------+------+------|
  // | Reset|      |      |      |      |      |      |      |      |      |      |      |
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // |      |      |      |  f() |      |      |      |      |  f() |      |      |      |
  // `-----------------------------------------------------------------------------------'

  [_ADJUST] = LAYOUT_planck_grid(
    PLOVER,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    AU_ON,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, ___fn__, _______, _______, _______, _______, ___fn__, _______, _______, _______
  ),
