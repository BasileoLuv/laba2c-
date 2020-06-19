#include "MyString.h"

MyString::MyString()
{
    size = 0;
    word = new char[1];
    word[0] = '\0';
    clear();


}

void MyString::clear()
{

    for (int i = 0; i < size; i++) {
        word[i] = '\0';
    }

}
void MyString::clear(char* buff,int size)
{

    for (int i = 0; i < size; i++) {
        buff[i] = '\0';
    }

}
MyString::MyString(const char* source)
{
    size = strlen(source);
    word = new char[size + 1];
    strcpy(word, source);
}

void MyString::copy(const MyString& source)
{
    size = source.size;
    word = new char[size + 1];
    clear();
    strcpy(word, source.word);
}

MyString* MyString::split(int& _size, const char delimiter)
{
    _size = 0;
    for (int i = 0; i < size; i++) {
        if (word[i] == delimiter) {
            _size++;
        }
    }
    _size++;
    char* buff = new char[this->size+1];
    clear(buff,this->size+1);
    MyString* arrStr = new MyString[_size];
    int j = 0;
    int k = 0;
    for (int i = 0; i < this->size+1; i++) {
        if (word[i] == delimiter || word[i]=='\0'){
            arrStr[j].copy(buff);
            j++;
            k = 0;
            clear(buff, this->size+1);
            continue;
        }
        buff[k] = word[i];
        k++;
    }
    return arrStr;
}