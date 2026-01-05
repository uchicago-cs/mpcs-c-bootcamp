#include <stdlib.h>
#include <stdio.h>


/* RESULT CODES */
#define SUCCESS   (0)
#define ENOMEM    (-1)
#define EEMPTY    (-2)
#define ENOTMID   (-3)


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
int list_init (list_t *l)
{
    l->head = NULL;
    l->tail = NULL;

    return SUCCESS;
}


/*
 * Frees resources associated with a graph
 *
 * Parameters:
 *  - l: The list
 *
 * Returns:
 *  - Always returns 0
 */
int list_free(list_t *l)
{
    list_node_t *pn = l->head;
    while(pn != NULL) {
        list_node_t *next = pn->next;
        free (pn);
        pn = next;
    }

    return SUCCESS;
}


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
int list_print(list_t *l)
{
    if (l->head == NULL) {
        printf ("EMPTY LIST\n");
    } else {
        list_node_t *pn = l->head;
        while (pn != NULL) {
            printf ("%d ", pn->value);
            pn = pn->next;
        }
        printf("\n");
    }
    return SUCCESS;
}


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
int list_insert_head (list_t *l, int n)
{
    list_node_t *node = calloc(1, sizeof(list_node_t));
    if (node == NULL) {
        return ENOMEM;
    }

    /* Set values in node */
    node->value = n;
    node->next = l->head;
    node->prev = NULL;

    /* If the list is non-empty, update the prev pointer
     * of the head node */
    if (l->head != NULL) {
        l->head->prev = node;
    }

    /* Update list values */

    /* If this is the first node we insert, we need to update
     * the tail pointer too */
    if (l->tail == NULL) {
        l->tail = node;
    }
    l->head = node;

    return SUCCESS;
}


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
int list_insert_tail (list_t *l, int n)
{
    list_node_t *node = calloc(1, sizeof(list_node_t));
    if (node == NULL) {
        return ENOMEM;
    }

    /* Set values in node */
    node->value = n;
    node->next = NULL;
    node->prev = l->tail;

    /* If the list is non-empty, update the next pointer
     * of the tail node */
    if (l->tail != NULL) {
        l->tail->next = node;
    }

    /* Update list values */

    /* If this is the first node we insert, we need to update
     * the head pointer too */
    if (l->head == NULL) {
        l->head = node;
    }
    l->tail = node;

    return SUCCESS;
}


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
int list_remove_head (list_t *l)
{
    if (l->head == NULL) {
        return EEMPTY;
    }

    /* Remove head node */
    list_node_t *node = l->head;
    l->head = node->next;
    free (node);
    if (l->head != NULL) {
        l->head->prev = NULL;
    } else {
        l->tail = NULL;
    }

    return SUCCESS;
}


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
int list_remove_tail (list_t *l)
{
    if (l->head == NULL) {
        return EEMPTY;
    }

    /* Remove tail node */
    list_node_t *node = l->tail;
    l->tail = node->prev;
    free (node);
    if (l->tail != NULL) {
        l->tail->next = NULL;
    } else {
        l->head = NULL;
    }

    return SUCCESS;
}

/*
 * Remove an intermediate node (i.e., not the head
 * or tail of the list) from the list.
 *
 * Parameters:
 *  - node: The node to remove
 *
 * Returns:
 *  - 0 on success.
 *  - ENOTMID: If the node is not an intermediate node
 */
int list_remove_intermediate_node (list_node_t *node)
{
    /* Your code here */

    return SUCCESS;
}

int main ()
{
    list_t lst;

    list_init (&lst);

    list_insert_tail (&lst, 10);
    list_insert_tail (&lst, 20);
    list_insert_tail (&lst, 30);
    list_insert_tail (&lst, 40);

    list_print (&lst);

    list_node_t *third_node = lst.head->next->next;
    list_remove_intermediate_node (third_node);
    list_print (&lst);

    list_free (&lst);
}