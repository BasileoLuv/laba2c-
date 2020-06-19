#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>

class MyString
{
public:
    static const int maxSize = 20;
    char* word;
    int size;
    MyString();
    void clear();
    void clear(char* buff, int size);
    MyString(const char* source);
    void copy(const MyString& source);
    MyString* split(int& size, const char delimiter);
};