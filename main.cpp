#include <iostream>
#include "list_node.h"

int main() 
{
    list_node *l = (list_node*) malloc(sizeof(list_node));
    l->data = 33;
    l->ptr_next = nullptr;
    std::cout << l->data << std::endl;
    return 0;
}
