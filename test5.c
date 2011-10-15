#include <stdio.h>

void test_func(void) {
  printf("I am in function %s.\n", __func__);
}

int main(void) {
  test_func();

  return 0;
}
