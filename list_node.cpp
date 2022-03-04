#include "list_node.h"

list_node::list_node(int data, list_node *ptr_next)
{
    this->data = data;
    this->ptr_next = ptr_next;
}

void list_node::add_next(list_node* ptr)
{
    ptr_next = ptr;
}

void list_node::add_data(int new_data)
{
    data = new_data;
}