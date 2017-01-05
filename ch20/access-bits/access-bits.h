// Copyright (c) 2016 Jay J. Lim All Rights Reserved.

#if !defined(__STDC__) || \
    !defined(__STDC_VERSION__) || \
    !(__STDC_VERSION__ >= 199901L)
#error This header file requires Standard C compiler.
#endif

#ifndef CH_20_ACCESS_BITS
#define CH_20_ACCESS_BITS

#include <stdbool.h>

typedef unsigned int bits_type;
typedef bits_type *Bits;

Bits create_bits(void);
void destroy_bits(Bits bits_array);
void set_all_bits(Bits bits_array);
void clear_all_bits(Bits bits_array);
void set_bits(Bits bits_array, int to_be_set);
void clear_bits(Bits bits_array, int to_be_cleared);
bool test_bits(Bits bits_array, int to_be_tested);

#endif /* end of include guard: CH_20_ACCESS_BITS */
