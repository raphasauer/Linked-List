#include "linked_list.h"

linked_list::linked_list()
{
    length = 0;
    head = nullptr;
}

int linked_list::insert(int data)
{
    list_node *aux_ptr = head;
    list_node *new_node = (list_node *)malloc(sizeof(list_node));
    new_node->add_data(data);

    if (head == nullptr)
    {
        head = new_node;
        length++;
        return 0;
    }
    else
    {
        for (int i = 0; i < length - 1; i++)
            aux_ptr = aux_ptr->ptr_next;

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
