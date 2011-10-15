#include <stdio.h>

typedef struct foobar_s {
  int a;
  int b;
} foobar_t;

void foobar_print(foobar_t *foo) {
  printf("a: %d, b: %d\n", foo->a, foo->b);
}

int main(void) {
  foobar_print(&(foobar_t){1, 2});
  return 0;
}
