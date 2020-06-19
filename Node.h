#pragma once
#include "MyString.h"
class Node
{
public:
    MyString* FirstWord;
    Node(const char* FirstWord);
    ~Node() {};
    void print();

    Node* next;

};

