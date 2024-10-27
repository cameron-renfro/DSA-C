# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

// Create a function that removes item from end of list
// Create a function that removes item from beginning of list

typedef struct node {
  int val;
  struct node * next;
} node_t;

// Create a function that initializes a linked list - ✅
void initialize_node(node_t * test) {
    test->val = 1;
    test->next = NULL;
}

// Create a function that iterates of the list - ✅
void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
      printf("Current list value is: %d\n", current->val);
      current = current->next;
    }
}

// Create a function that adds an item to the end of the list - ✅
void push(node_t * head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
      current = current->next;
    }

    current->next = (node_t *) malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

// Create a function that adds an item to the beginning of the list
void push_start(node_t ** head, int val) {
    node_t * new_node;
    new_node = (node_t *) malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

int main() {
  node_t * head;
  head = (node_t *) malloc(sizeof(node_t));
  if (head == NULL) {
    printf("Done fucked up");
    return 1;
  }
  initialize_node(head);
  print_list(head);
  push(head, 2);
  print_list(head);

  return 0;
}