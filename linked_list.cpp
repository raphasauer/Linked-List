#include "linked_list.h"

linked_list::linked_list()
{
    length = 0;
    head = nullptr;
}

int linked_list::insert(int data)
{
    list_node *aux_ptr = head;
    for (int i = 0; i < length; i++)
    {
        aux_ptr = aux_ptr->ptr_next;
    }
    list_node *new_node = (list_node *)malloc(sizeof(list_node));
    new_node->add_data(data);
    aux_ptr->add_next(new_node);
    length++;
    return length - 1;
}
