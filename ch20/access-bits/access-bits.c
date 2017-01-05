#include <stdio.h>
#include <stdlib.h>
#include "access-bits.h"



Bits create_bits(void)
{
  Bits b = malloc(sizeof(bits_type));
  clear_all_bits(b);
  return b;
}

void destroy_bits(Bits b)
{
  free(b);
}

void set_all_bits(Bits b)
{
  *b |= ~0x0000;
}

void clear_all_bits(Bits b)
{
  *b &= 0x0000;
}

void set_bits(Bits b, int j)
{
  *b |= 1 << j;
}

void clear_bits(Bits b, int j)
{
  *b &= ~(1 << j);
}

bool test_bits(Bits b, int j)
{
  return ((*b) & 1 << j);
}
