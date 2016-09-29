typedef struct element {
  struct element *next;
  struct element *prev;
  void *content;
} Element;

typedef struct {
  Element *head, *tail;
} List;
