#ifndef INCLUDE_EX_C_EPTION_
#define INCLUDE_EX_C_EPTION_CORE_H

#include <stdlib.h>
#include <setjmp.h>
#include "./utils.h"

#include "core.c"

extern jmp_buf exCeption_global_jmp_buf;
extern short exCeption_global_flag;

#define FAINALLY (-1)

#define FUNC_NAME __lambda_function__

#define try \
{\
  exCeption_global_flag = 0;\
  switch(setjmp(exCeption_global_jmp_buf)) {\
    case 0: {void FUNC_NAME(void) { /* )}} for escape auto tab */
            //  case 0: EX_LAMBDA(void, (void), { /* )}} for escape auto tab */

#define throw(__SOME_EXCEPTION__) longjmp(exCeption_global_jmp_buf, __SOME_EXCEPTION__);

#define catch(__SOME_EXCEPTION__, __EXCEPTION_VALUE__) /* {{({ */ \
} FUNC_NAME();} throw(FAINALLY);\
case __SOME_EXCEPTION__:\
{ void FUNC_NAME(void) {\
  char __EXCEPTION_VALUE__ [] = #__SOME_EXCEPTION__;\
  if (exCeption_global_flag) throw(FAINALLY);\
  if (!exCeption_global_flag) exCeption_global_flag = 1; /* }) for escape auto tab */

#define finally /* {{({ */ \
} FUNC_NAME();} case FAINALLY:\
{ void FUNC_NAME(void) { /* }) for escape auto tab */

#define end } FUNC_NAME(); } if (exCeption_global_flag) exit(EXIT_FAILURE); } }

#endif
