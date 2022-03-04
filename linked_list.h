#ifndef LINKED_LIST
#define LINKED_LIST
#include "list_node.h"

class linked_list
{
private:
    list_node *head;

public:
    int length;
    ///Returns the index where the element was inserted or -1 if there was an error
    int insert(int data);
    linked_list();
};

#endif