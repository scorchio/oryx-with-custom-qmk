#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_35_221_255,
};



#define DUAL_FUNC_0 LT(12, KC_F6)
#define DUAL_FUNC_1 LT(12, KC_P)
#define DUAL_FUNC_2 LT(9, KC_T)
#define DUAL_FUNC_3 LT(8, KC_F3)
#define DUAL_FUNC_4 LT(15, KC_J)
#define DUAL_FUNC_5 LT(10, KC_F18)
#define DUAL_FUNC_6 LT(12, KC_S)
#define DUAL_FUNC_7 LT(9, KC_0)
#define DUAL_FUNC_8 LT(12, KC_I)
#define DUAL_FUNC_9 LT(6, KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    HU_II,          HU_OEE,         HU_OO,          HU_UU,          HU_SCLN,        HU_COLN,                                        HU_DQOT,        HU_UE,          HU_QST,         KC_X,           HU_EXLM,        HU_UEE,
    HU_OE,          HU_AA,          HU_Z,           KC_C,           HU_Y,           DUAL_FUNC_0,                                    DUAL_FUNC_2,    KC_M,           KC_R,           KC_H,           KC_B,           KC_W,
    KC_TAB,         MT(MOD_LCTL, KC_I),MT(MOD_LALT, KC_O),MT(MOD_LGUI, KC_E),MT(MOD_LSFT, KC_A),DUAL_FUNC_1,                                    DUAL_FUNC_3,    MT(MOD_LSFT, KC_T),MT(MOD_LGUI, KC_S),MT(MOD_LALT, KC_N),MT(MOD_LCTL, KC_L),KC_J,
    KC_ESCAPE,      KC_P,           HU_EE,          KC_U,           KC_D,           HU_LPRN,                                        HU_RPRN,        KC_G,           KC_V,           KC_F,           KC_K,           KC_Q,
                                                    LT(1, KC_ENTER),MO(2),                                          LT(1, KC_SPACE),LT(2, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_F1,          KC_F2,          DUAL_FUNC_4,    DUAL_FUNC_5,    KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,
    TO(0),          HU_PIPE,        HU_PERC,        HU_GRV,         HU_CIRC,        HU_LESS,                                        HU_MORE,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    KC_KP_SLASH,
    KC_TRANSPARENT, DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    HU_LCBR,                                        HU_RCBR,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_KP_ASTERISK,
    KC_TRANSPARENT, HU_BSLS,        HU_TILD,        HU_UNDS,        KC_BSPC,        HU_LBRC,                                        HU_RBRC,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      KC_KP_EQUAL,
                                                    KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_KP_0
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,                                          KC_NO,          KC_NO,          KC_PAGE_UP,     KC_NO,          KC_NO,          KC_NO,
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_HOME,        KC_BSPC,        KC_UP,          KC_DELETE,      KC_END,         HU_F,
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          LGUI(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LGUI(KC_RIGHT), HU_C,
    KC_TRANSPARENT, KC_NO,          KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   KC_NO,                                          LSFT(KC_TAB),   LALT(KC_LEFT),  KC_PGDN,        LALT(KC_RIGHT), KC_TAB,         KC_GRAVE,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,                                          QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          LGUI(LSFT(HU_3)),LGUI(LSFT(HU_4)),
    TO(0),          KC_NO,          KC_NO,          KC_MS_UP,       KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MS_WH_UP,    KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,                                          KC_MS_WH_LEFT,  KC_LEFT_SHIFT,  KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_MS_WH_RIGHT,
    KC_NO,          KC_NO,          KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   KC_NO,                                          KC_NO,          KC_NO,          KC_MS_WH_DOWN,  KC_NO,          KC_NO,          KC_NO,
                                                    KC_NO,          KC_NO,                                          KC_MS_BTN1,     KC_MS_BTN2
  ),
  [4] = LAYOUT_voyager(
    RGB_TOG,        KC_NO,          KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_VAD,        RGB_VAI,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,
    TO(0),          KC_NO,          RGB_SPD,        RGB_SPI,        RGB_HUD,        RGB_HUI,                                        KC_NO,          QK_DYNAMIC_TAPPING_TERM_UP,KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_SAD,        RGB_SAI,                                        QK_DYNAMIC_TAPPING_TERM_PRINT,QK_DYNAMIC_TAPPING_TERM_DOWN,KC_NO,          KC_NO,          KC_NO,          KC_NO,
    HSV_35_221_255, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, HU_UE,          HU_QST,         HU_X,           HU_EXLM,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LCTL(KC_LEFT),  HU_I,           HU_O,           HU_E,           HU_A,           KC_TRANSPARENT,                                 KC_TRANSPARENT, HU_T,           HU_S,           HU_N,           HU_L,           KC_TRANSPARENT,
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_LEFT_SHIFT,                                  KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    MI_Fs1,         MI_G1,          MI_Gs1,         MI_A1,          MI_As1,         MI_B1,                                          MI_Fs3,         MI_G3,          MI_Gs3,         MI_A3,          MI_As3,         MI_B3,
    MI_C1,          MI_Cs1,         MI_D1,          MI_Ds1,         MI_E1,          MI_F1,                                          MI_C3,          MI_Cs3,         MI_D3,          MI_Ds3,         MI_E3,          MI_F3,
    MI_Fs,          MI_G,           MI_Gs,          MI_A,           MI_As,          MI_B,                                           MI_Fs2,         MI_G2,          MI_Gs2,         MI_A2,          MI_As2,         MI_B2,
    MI_C,           MI_Cs,          MI_D,           MI_Ds,          MI_E,           MI_F,                                           MI_C2,          MI_Cs2,         MI_D2,          MI_Ds2,         MI_E2,          MI_F2,
                                                    TO(0),          KC_TRANSPARENT,                                 QK_MIDI_TRANSPOSE_DOWN, QK_MIDI_TRANSPOSE_UP
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_F1,          HU_I,           KC_F3,          HU_M,           KC_F6,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(0),
    HU_T,           KC_CAPS,        HU_Q,           HU_W,           HU_E,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_TAB,         KC_LEFT_SHIFT,  HU_A,           HU_S,           HU_D,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_ESCAPE,      KC_LEFT_CTRL,   HU_H,           KC_ENTER,       HU_F,           HU_R,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                    HU_C,           KC_SPACE,                                       KC_F5,          KC_F9
  ),
};

const uint16_t PROGMEM combo0[] = { HU_SCLN, HU_COLN, COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_LSFT, KC_A), MT(MOD_LSFT, KC_T), COMBO_END};
const uint16_t PROGMEM combo2[] = { HU_II, HU_OEE, COMBO_END};
const uint16_t PROGMEM combo3[] = { HU_OO, HU_UU, COMBO_END};
const uint16_t PROGMEM combo4[] = { HU_DQOT, HU_UE, COMBO_END};
const uint16_t PROGMEM combo5[] = { HU_EXLM, HU_UEE, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(5)),
    COMBO(combo1, CW_TOGG),
    COMBO(combo2, TO(4)),
    COMBO(combo3, TO(3)),
    COMBO(combo4, TO(6)),
    COMBO(combo5, TO(7)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HU_EE:
            return g_tapping_term + 75;
        case KC_U:
            return g_tapping_term + 75;
        case KC_D:
            return g_tapping_term + 75;
        case LT(1, KC_ENTER):
            return g_tapping_term + 125;
        case LT(1, KC_SPACE):
            return g_tapping_term -25;
        case LT(2, KC_BSPC):
            return g_tapping_term + 125;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {41,119,230}, {41,119,230}, {29,255,255}, {29,255,255}, {41,119,230}, {41,119,230}, {255,218,204}, {209,153,255}, {209,153,255}, {209,153,255}, {209,153,255}, {0,0,0}, {0,0,0}, {209,153,255}, {209,153,255}, {209,153,255}, {209,153,255}, {0,0,0}, {0,0,0}, {209,153,255}, {209,153,255}, {209,153,255}, {0,245,245}, {0,0,0}, {0,0,0}, {0,229,255}, {41,119,230}, {41,119,230}, {41,119,230}, {41,119,230}, {41,119,230}, {41,119,230}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {117,153,248}, {117,153,248}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {117,153,248}, {117,153,248}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {117,153,248}, {117,153,248}, {0,0,0}, {131,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {255,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {149,255,154}, {149,255,154}, {149,255,154}, {149,255,154}, {0,0,0}, {0,0,0}, {0,0,0}, {196,255,255}, {196,255,255}, {196,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {57,183,242}, {0,0,0}, {0,0,0}, {0,0,0}, {57,183,242}, {0,245,245}, {29,255,255}, {0,245,245}, {57,183,242}, {149,255,154}, {57,183,242}, {29,255,255}, {29,255,255}, {29,255,255}, {57,183,242}, {149,255,154}, {131,255,255}, {57,183,242}, {57,183,242}, {57,183,242}, {131,255,255}, {149,255,154}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {29,255,255}, {29,255,255}, {29,255,255}, {0,0,0}, {255,218,204}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {196,255,255}, {196,255,255}, {196,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {255,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {149,218,204}, {149,218,204}, {0,0,0}, {0,0,0}, {39,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {39,218,204}, {149,255,154}, {149,255,154}, {149,255,154}, {149,255,154}, {39,218,204}, {0,0,0}, {0,0,0}, {39,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204} },

    [5] = { {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255}, {112,222,255} },

    [6] = { {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,218,204}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [7] = { {0,0,0}, {193,248,161}, {193,248,161}, {193,248,161}, {193,248,161}, {193,248,161}, {139,255,255}, {34,219,255}, {34,219,255}, {86,255,230}, {34,219,255}, {0,0,0}, {193,248,161}, {34,219,255}, {86,255,230}, {86,255,230}, {86,255,230}, {0,0,0}, {0,218,204}, {34,219,255}, {193,248,161}, {34,219,255}, {150,255,255}, {17,255,255}, {198,243,255}, {86,255,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,220,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,230}, {23,223,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_MINS);
        } else {
          unregister_code16(HU_MINS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_F8)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_F8)))));
        }
      }
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_COMM);
        } else {
          unregister_code16(HU_COMM);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_F9)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_F9)))));
        }
      }
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_QUOT);
        } else {
          unregister_code16(HU_QUOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_F10)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_F10)))));
        }
      }
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_DOT);
        } else {
          unregister_code16(HU_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_F11)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_F11)))));
        }
      }
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(HU_3)));
        } else {
          unregister_code16(LGUI(LSFT(HU_3)));
        }
      }
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(HU_4)));
        } else {
          unregister_code16(LGUI(LSFT(HU_4)));
        }
      }
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_AMPR);
        } else {
          unregister_code16(HU_AMPR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }
      }
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_AT);
        } else {
          unregister_code16(HU_AT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }
      }
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_HASH);
        } else {
          unregister_code16(HU_HASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }
      }
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(HU_DLR);
        } else {
          unregister_code16(HU_DLR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_35_221_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(35,221,255);
      }
      return false;
  }
  return true;
}

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        // scor: adding the Hungarian letter keycodes
        case HU_II:
        case HU_OEE:
        case HU_OO:
        case HU_UU:
        case HU_OE:
        case HU_AA:
        // scor: The following two are not needed as they are in KC_A ... KC_Z:
        // case HU_Z:
        // case HU_Y:
        case HU_EE:
        case HU_UE:
        case HU_UEE:
        // scor: using Hungarian minus instead of the English one
        case HU_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT)); // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        // scor: removed KC_0 from here, as it conflicted with HU_OE
        case KC_1 ... KC_9:
        case KC_BSPC:
        case KC_DEL:
        // scor: using Hungarian underscore instead of the English one
        case HU_UNDS:
            return true;

        default:
            return false; // Deactivate Caps Word.
    }
}
