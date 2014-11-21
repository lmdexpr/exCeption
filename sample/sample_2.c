#include <stdio.h>
#include <stdlib.h>
#include "exCeption.h"

#define N 50
#define M 500

#define AbcException 1

void hoge(void);
int main(void)
{
  try {
    puts("throw");
    hoge();
    throw(AbcException);
    puts("じっこうしてほしくない");
  } catch (AbcException, e) {
    printf("catch Exception:%s\n", e);
  } finally {
    puts("finally");
    exit(EXIT_FAILURE);
  } end;

  printf("EXIT\n");

  return 0;
}

void hoge(void) {
  puts("hogehoge~");
  throw(AbcException);
}
