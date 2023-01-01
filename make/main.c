#include <stdio.h>
#include "list.h"

int main()
{
    list_t lst;

    list_init(&lst);

    list_insert_tail(&lst, 10);
    list_insert_tail(&lst, 20);
    list_insert_tail(&lst, 30);
    list_insert_tail(&lst, 40);

    list_print(&lst);

    list_free(&lst);
}