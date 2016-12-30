#include "add.h"

int extern_link = 0;

void extern_func(void)
{
  int i;
  for (i = 0; i < 22; i += 2) {
    extern_link+=2;
    printf("extern_link %d\n", extern_link);
  }
}
