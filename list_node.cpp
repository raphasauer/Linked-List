#include "list_node.h"

std::string list_node::to_string()
{
    std::string output = "data=" + data;
    output += ", ptr_next=" + (int) ptr_next;
    return output;
}