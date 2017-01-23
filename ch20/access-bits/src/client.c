#include <stdio.h>
#include "access-bits.h"

#define INT_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"
#define INT_TO_BINARY(int)  \
  (int & 0x8000 ? '1' : '0'), \
  (int & 0x4000 ? '1' : '0'), \
  (int & 0x2000 ? '1' : '0'), \
  (int & 0x1000 ? '1' : '0'), \
  (int & 0x0800 ? '1' : '0'), \
  (int & 0x0400 ? '1' : '0'), \
  (int & 0x0200 ? '1' : '0'), \
  (int & 0x0100 ? '1' : '0'), \
  (int & 0x0080 ? '1' : '0'), \
  (int & 0x0040 ? '1' : '0'), \
  (int & 0x0020 ? '1' : '0'), \
  (int & 0x0010 ? '1' : '0'), \
  (int & 0x0008 ? '1' : '0'), \
  (int & 0x0004 ? '1' : '0'), \
  (int & 0x0002 ? '1' : '0'), \
  (int & 0x0001 ? '1' : '0')

int main(void)
{
  Bits b = create_bits();
  // Bits n;

  set_all_bits(b);
  printf("set_all_bits(b): "INT_TO_BINARY_PATTERN"\n", INT_TO_BINARY(*b));

  clear_all_bits(b);
  printf("set_all_bits(b): "INT_TO_BINARY_PATTERN"\n", INT_TO_BINARY(*b));

}
