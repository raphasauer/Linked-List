#include <iostream>
#include "list_node.cpp"

int main()
{
    list_node *l1 = (list_node *)malloc(sizeof(list_node));
    list_node *l2 = (list_node *)malloc(sizeof(list_node));

    l1->add_next(l2);

    return 0;
}
