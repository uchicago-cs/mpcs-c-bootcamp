#include <stdlib.h>
#include <stdio.h>
#include "list.h"


/* See list.h */
int list_init(list_t *l)
{
    l->head = NULL;
    l->tail = NULL;

    return SUCCESS;
}


/* See list.h */
int list_free(list_t *l)
{
    list_node_t *pn = l->head;
    while(pn != NULL)
    {
        list_node_t *next = pn->next;
        free(pn);
        pn = next;
    }

    return SUCCESS;
}


/* See list.h */
int list_print(list_t *l)
{
    if(l->head == NULL)
    {
        printf("EMPTY LIST\n");
    }
    else
    {
        list_node_t *pn = l->head;
        while (pn != NULL) {
            printf("%i ", pn->value);
            pn = pn->next;
        }
        printf("\n");
    }
    return SUCCESS;
}


/* See list.h */
int list_insert_head(list_t *l, int n)
{
    list_node_t *node = calloc(1, sizeof(list_node_t));
    if(node == NULL)
        return ENOMEM;

    /* Set values in node */
    node->value = n;
    node->next = l->head;
    node->prev = NULL;

    /* If the list is non-empty, update the prev pointer
     * of the head node */
    if(l->head != NULL)
        l->head->prev = node;

    /* Update list values */

    /* If this is the first node we insert, we need to update
     * the tail pointer too */
    if(l->tail == NULL)
        l->tail = node;
    l->head = node;

    return SUCCESS;
}


/* See list.h */
int list_insert_tail(list_t *l, int n)
{
    list_node_t *node = calloc(1, sizeof(list_node_t));
    if(node == NULL)
        return ENOMEM;

    /* Set values in node */
    node->value = n;
    node->next = NULL;
    node->prev = l->tail;

    /* If the list is non-empty, update the next pointer
     * of the tail node */
    if(l->tail != NULL)
        l->tail->next = node;

    /* Update list values */

    /* If this is the first node we insert, we need to update
     * the head pointer too */
    if(l->head == NULL)
        l->head = node;
    l->tail = node;

    return SUCCESS;
}


/* See list.h */
int list_remove_head(list_t *l)
{
    if(l->head == NULL)
        return EEMPTY;

    /* Remove head node */
    list_node_t *node = l->head;
    l->head = node->next;
    free(node);
    if(l->head != NULL)
        l->head->prev = NULL;
    else
        l->tail = NULL;

    return SUCCESS;
}


/* See list.h */
int list_remove_tail(list_t *l)
{
    if(l->head == NULL)
        return EEMPTY;

    /* Remove tail node */
    list_node_t *node = l->tail;
    l->tail = node->prev;
    free(node);
    if(l->tail != NULL)
        l->tail->next = NULL;
    else
        l->head = NULL;

    return SUCCESS;
}
