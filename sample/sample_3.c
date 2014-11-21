#include <stdio.h>
#include "exCeption.h"

#define N 50
#define M 500

int hoge(char *);
int main(void)
{
  int a[N];

  printf("please input line(%d chars):", N);

  try {
    hoge(map_p(LAMBDA(void, (int *c), *c = getchar();), a));
  } catch (OutOfRange, e) {
    fprintf(stderr, "Exception:%s\nplease re input:", e);
  } catch (NotFoundNull, e) {
    fprintf(stderr, "Exception:%s\n", e);
  } finally {
    return -1;
  } end;

  printf("EXIT\n");

  return 0;
}

int hoge(char *source) {
  char dest[M];

  ex_strcpy(dest, source);

  ex_puts(dest);
}
