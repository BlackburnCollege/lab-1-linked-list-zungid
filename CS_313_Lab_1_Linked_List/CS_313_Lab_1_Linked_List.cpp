#include <iostream>
#include "Node.h"

int main()
{
    Node* head = NULL;

    head = (Node*)malloc(sizeof(Node));
    head->value = 42;
    head->next = NULL;

    std::cout << head->value << '\n';
}

