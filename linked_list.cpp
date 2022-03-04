#include "linked_list.h"

linked_list::linked_list()
{
    length = 0;
    head = nullptr;
}

int linked_list::insert(int data)
{
    list_node *aux_ptr;
    list_node *new_node = (list_node *)malloc(sizeof(list_node));
    
    if(!new_node)
        return -1;
    
    new_node->add_data(data);

    if (head == nullptr)
    {
        head = new_node;
        length++;
        return 0;
    }
    else
    {
        aux_ptr = last_node();
        aux_ptr->add_next(new_node);
        length++;
        return length - 1;
    }
}

void linked_list::output_list()
{
    std::cout << "[ ";
    list_node *aux_ptr = head;
    for (int i = 0; i < length; i++)
    {
        std::cout << aux_ptr->data << " ";
        aux_ptr = aux_ptr->ptr_next;
    }
    std::cout << "]";
}

list_node* linked_list::last_node()
{
    list_node *aux_ptr = head;
    for (int i = 0; i < length - 1; i++)
        aux_ptr = aux_ptr->ptr_next;
    return aux_ptr;
}