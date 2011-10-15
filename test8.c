#include <stdlib.h>
#include <stdio.h>

struct s { int n; double d[]; };

int main(void) {
  struct s *p1, *p2;
  size_t   sz = sizeof(struct s);

  p1 = malloc(sizeof(*p1) + 8 * sizeof(double));
  p2 = malloc(sizeof(*p2) + 5 * sizeof(double));

  printf("sizeof struct s: %lu\n", sz);

  return 0;
}
