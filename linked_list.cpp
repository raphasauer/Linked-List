#include "linked_list.h"

linked_list::linked_list() 
{
    length = 0;
    head = nullptr;
}

int linked_list::insert(int data)
{
    if(head == nullptr)
    {
        list_node* newHead = (list_node*) malloc(sizeof(list_node));
        newHead->add_data(data);
        head = newHead;
        return 0;
    }
}