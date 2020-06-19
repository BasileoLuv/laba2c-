#include "Node.h"


Node::Node(const char* FirstWord)
{
    this->FirstWord = new MyString(FirstWord);
    next = NULL;
}

void Node::print()
{
    if(this && FirstWord )
        std::cout << FirstWord->word;
}