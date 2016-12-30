#include <stdio.h>
#include "static-header-test.h"

// Can not be defined as static, since the variable is already declared
// in another file so that the variable has the external linkage.
//static int static_internal = 32;
int static_internal = 32;

void static_header_func(void)
{
    printf("static_internal %d\n", static_internal);
}
