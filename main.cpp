#include <iostream>
#include "list_node.cpp"
#include "linked_list.cpp"

int main()
{
    list_node *l1 = (list_node *)malloc(sizeof(list_node));
    list_node *l2 = (list_node *)malloc(sizeof(list_node));

    l1->add_next(l2);

    free(l1);
    free(l2);

    linked_list *ll = (linked_list *)malloc(sizeof(linked_list));

    std::cout << ll->insert(2) << std::endl;
    std::cout << ll->insert(2) << std::endl;

    free(ll);

    return 0;
}
