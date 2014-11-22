#include <stdio.h>
#include <stdlib.h>
#include "exCeption.h"

#define N 50
#define M 500

#define AbcException 1

int main(void)
{
  try {
    puts("throw");
    throw(AbcException);
    puts("じっこうしてほしくない");
  } catch(AbcException, e) {
    printf("catch Exception:%s\n", e);
  } finally {
    puts("finally");
  } end;

  printf("EXIT\n");

  return 0;
}
