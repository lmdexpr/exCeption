#ifndef INCLUDE_EX_C_EPTION_UTILS_H
#define INCLUDE_EX_C_EPTION_UTILS_H

#define EX_LAMBDA __EX_LAMBDA__
#define __EX_LAMBDA__(RET, ARGS, BODY) ({\
  RET __LAMBDA_FUNCTION__ ARGS {BODY};\
  __LAMBDA_FUNCTION__;\
})\

#define STR(x) #x

#define BUF(x) x

#endif
