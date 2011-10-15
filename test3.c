#include <stdio.h>

struct llist { int a; struct llist* next;};
#define cons(x,y) (struct llist[]){{x,y}}

int main(void) {
  struct llist *list=cons(1, cons(2, cons(3, cons(4, NULL))));
  struct llist *p = list;

  while(p != 0) {
    printf("%d\n", p->a);
    p = p->next;
  }
  return 0;
}
