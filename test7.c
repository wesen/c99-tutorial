#include <stdio.h>

void f(_Bool flag) {
  if (flag) {
    printf("yeah %d\n", flag);
  } else {
    printf("no %d\n", flag);
  }
}

int main(void) {
  f(0);
  f(1);
  f(2);

  return 0;
}
