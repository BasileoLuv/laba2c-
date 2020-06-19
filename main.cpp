#include <iostream>
#include <string>
#include "Reader.h"
#include "List.h"
#include "Node.h"

using namespace std;
MyString* InputString() {
    MyString* str1 = new MyString();
    std::cin.ignore(std::cin.rdbuf()->in_avail());
    char* buff = new char[300];
    cout << "\t Enter: >> ";
    cin.getline(buff, 300);
    str1->copy(buff);
    delete[] buff;

    return str1;
}

int main()
{
    cout << "Выполнил студент группы 9005 Басилая Андрей Карлович"<<endl;
    List* list = new List();
    Reader* reader = new Reader ();
    reader->read("text.txt",list);
    cout << "Список"<<endl;
    list->print();

    list->tail->FirstWord = InputString();
    cout << "Новый список"<<endl;
    list->print();
    cout<< endl << "----------------"<<endl;
    list->delALL();
    cout<< endl << "Список очищен"<<endl;
    list->print();

    return 0;

}

//начало; создание собественного класса листа и ридера; потом читаем данные из  файла text.txt; вывод содержимого; ручной ввод послленедго элемемнта; Замена ласт элементаля; вывод содержимого списка; очистка списка; демонстрация пустого списка; конец;
