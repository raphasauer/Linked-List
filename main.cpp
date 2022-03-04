#include <iostream>
#include "list_node.cpp"
#include "linked_list.cpp"

int main()
{
    linked_list *ll = (linked_list *)malloc(sizeof(linked_list));

    ll->insert(1);
    ll->insert(2);
    ll->insert(1);
    ll->insert(5);

    ll->output_list();

    free(ll);

    return 0;
}
