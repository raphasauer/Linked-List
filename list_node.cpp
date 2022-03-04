#include "list_node.h"

list_node::list_node(int data, list_node *ptr_next = nullptr)
{
    this->data = data;
    this->ptr_next = ptr_next;
}