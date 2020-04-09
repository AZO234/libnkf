/* === ISO-2022-JP and UTF-8 code pair === (C) AZO */

#ifndef _JISUTF8PAIR_H_
#define _JISUTF8PAIR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef struct jisutf8pair_t_ {
  uint8_t type;
  uint16_t jis;
  uint32_t utf8;
} jisutf8pair_t;

extern jisutf8pair_t jisutf8pairs[];
extern uint8_t jisutf8pair_count;

#ifdef __cplusplus
}
#endif

#endif  // _JISUTF8PAIR_H_

