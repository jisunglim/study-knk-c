#ifndef __STDC__
#errer This header requires a Standard C compiler
#endif /* __STDC__ */

#ifndef STUDY_KNK_C_STATIC_FN
#define STUDY_KNK_C_STATIC_FN

#include <stdio.h>

void default_sfn(void);

void (*return_static_sfn()) (void);

static void static_sfn(void);

#endif /* STUDY_KNK_C_STATIC_FN */
