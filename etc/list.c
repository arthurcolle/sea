#include "list.h"
#include <stdlib.h>

int a(void) {
  List *list = malloc(sizeof(List));
  Element *head = list->head;
  head = malloc(sizeof(Element));
  return 123;
}

int main(void) {
  int y = a();
  printf("%d\n", y);
  return 0;
}
