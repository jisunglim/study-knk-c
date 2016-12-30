#include "static-fn.h"

void default_sfn(void)
{
  printf("default_sfn\n");
}

void (*return_static_sfn()) (void)
{
  return static_sfn;
}

static void static_sfn(void)
{
  printf("static_sfn\n");
}
