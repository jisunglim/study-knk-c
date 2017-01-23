// Copyright (c) 2016 Jay J. Lim All Rights Reserved.

#if \
  !defined(__STDC__) || \
  !defined(__STDC_VERSION__) ||\
  !(__STDC_VERSION__ >= 199901L)
#error This header file requires Standard C compiler.
#endif

#ifndef CH_20_ACCESS_BITS
#define CH_20_ACCESS_BITS

#include <stdbool.h>

typedef unsigned int bits_type;
typedef bits_type *Bits;

Bits create_bits(void);
void destroy_bits(Bits bits);

void set_all_bits(Bits bits);
void clear_all_bits(Bits bits);

void set_bit(Bits bits, int nth_pos);
void clear_bit(Bits bits, int nth_pos);
bool test_bit(Bits bits, int nth_pos);

void set_bit_field(Bits bits, unsigned int to_be_set);
Bits get_bit_field(Bits bits, unsigned int to_be_got);

#endif
