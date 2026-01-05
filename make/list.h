/*
 * Linked list of integers
 *
 * This module provides a double-headed, doubly-linked list
 * where each node contains an integer
 *
 */

#ifndef INCLUDE_LIST_H_
#define INCLUDE_LIST_H_


/* RESULT CODES */
#define SUCCESS   (0)
#define ENOMEM    (-1)
#define EEMPTY    (-2)


/* DATA STRUCTURES */

/* Forward declaration */
typedef struct list_node list_node_t;

/* A node in the linked list */
typedef struct list_node {
    /* Integer value */
    int value;

    /* Pointers to previous and next node in the list */
    list_node_t *prev;
    list_node_t *next;
} list_node_t;

/* List container */
typedef struct list {
    /* Pointers to the head and tail nodes */
    list_node_t *head;
    list_node_t *tail;
} list_t;


/*
 * Initializes a list
 *
 * Parameters:
 *  - l: The list to initialize. Must point to allocated memory.
 *
 * Returns:
 *  - 0 on success
 *  - ENOMEM: If there was insufficient memory
 */
int list_init (list_t *l);

/*
 * Frees resources associated with a graph
 *
 * Parameters:
 *  - l: The list
 *
 * Returns:
 *  - Always returns 0
 */
int list_free (list_t *l);

/*
 * Prints the contents of a list
 * (from head to tail, left to right)
 *
 * Parameters:
 *  - l: The list
 *
 * Returns:
 *  - Always returns 0
 */
int list_print (list_t *l);

/*
 * Inserts a value at the head of the list
 *
 * Parameters:
 *  - l: The list
 *  - n: The integer value to insert
 *
 * Returns:
 *  - 0 on success
 *  - ENOMEM: If there was insufficient memory
 */
int list_insert_head (list_t *l, int n);

/*
 * Inserts a value at the tail of the list
 *
 * Parameters:
 *  - l: The list
 *  - n: The integer value to insert
 *
 * Returns:
 *  - 0 on success
 *  - ENOMEM: If there was insufficient memory
 */
int list_insert_tail (list_t *l, int n);

/*
 * Remove the node at the head of the list.
 *
 * Parameters:
 *  - l: The list
 *
 * Returns:
 *  - 0 on success.
 *  - EEMPTY: If the list was empty (nothing to return)
 */
int list_remove_head (list_t *l);

/*
 * Remove the node at the tail of the list
 *
 * Parameters:
 *  - l: The list
 *
 * Returns:
 *  - 0 on success.
 *  - EEMPTY: If the list was empty (nothing to return)
 */
int list_remove_tail (list_t *l);

#endif