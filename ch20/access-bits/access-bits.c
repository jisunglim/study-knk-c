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

void set_bit_field(Bits b, unsigned int i)
{
  unsigned int cleaner = 0x0000;
  int j, start = 0, end = 15;

  while (!test_bits(&i, start++))
    ;
  while (!test_bits(&i, end--))
    ;

  while (start <= end) {
    set_bits(&cleaner, start++);
    set_bits(&cleaner, end--);
  }

  (*b) = ((*b) & ~cleaner) | i;
}

Bits get_bit_field(Bits b, unsigned int i)
{
  Bits new = malloc(sizeof(bits_type));
  set_bit_field(new, (*b) & i);

  return new;
}
