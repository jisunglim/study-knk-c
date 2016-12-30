#include "extern-fn.h"

void default_efn(void)
{
  printf("default_efn\n");
}

extern void extern_efn(void)
{
  printf("extern_efn\n");
}
