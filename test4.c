#include <stdio.h>

typedef struct foobar_s {
  int a;
  int b;
} foobar_t;

void foobar_print(foobar_t *foo) {
  printf("a: %d, b: %d\n", foo->a, foo->b);
}

int main(void) {
  foobar_t foos[] =
    { [0].a = 1, [0].b = 2,
      [1].a = 6, [1].b = 7 };

  foobar_print(foos + 0);
  foobar_print(foos + 1);

  return 0;
}
