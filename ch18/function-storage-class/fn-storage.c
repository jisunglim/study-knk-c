#include <stdio.h>
#include "static-fn.h"
#include "extern-fn.h"

int main(void)
{
  default_sfn();
  // static_sfn();
  void (*pf) (void);
  pf = return_static_sfn();
  (*pf)();

  default_efn();
  extern_efn();

}
