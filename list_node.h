#ifndef LIST_NODE
#define LIST_NODE

#include <iostream>

class list_node 
{
    public:
        list_node* ptr_next;
        int data;

    list_node(int data, list_node* ptr_next = nullptr);
};

#endif