#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

/* Definition of a node in the list */
typedef struct node {
    int data;
    struct node *next;
} node_t;

/* Definition of the list */
typedef struct list {
    node_t *head;
    size_t size;
} list_t;

/* Function to initialize an empty list */
void list_init(list_t *list);

/* Function to add a new node to the front of the list */
void list_push_front(list_t *list, int data);

/* Function to remove the first node from the list */
void list_pop_front(list_t *list);

/* Function to add a new node to the back of the list */
void list_push_back(list_t *list, int data);

/* Function to remove the last node from the list */
void list_pop_back(list_t *list);

/* Function to insert a new node at a given position in the list */
void list_insert(list_t *list, int data, size_t index);

/* Function to remove a node at a given position from the list */
void list_remove(list_t *list, size_t index);

/* Function to get the data stored in a node at a given position in the list */
int list_get(list_t *list, size_t index);

/* Function to print the contents of the list */
void list_print(list_t *list);

/* Function to get the size of the list */
size_t list_size(list_t *list);

#endif /* LIST_H */
