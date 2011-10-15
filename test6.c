#include <stdio.h>

void init_array(int a, int b) {
  int array[] = {
    a * 2,
    a + b,
    a * b,
    b * 3
  };

  for (int i = 0; i < 4; i++) {
    printf("%d: %d\n", i, array[i]);
  }
}

int main(void) {
  init_array(23, 40);

  return 0;
}
