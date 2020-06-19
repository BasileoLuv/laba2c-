#include "List.h"

//Ââîä äàííûõ
void List::Insert(Node* NewNode)
{
    if (head == NULL) {
        head = tail = NewNode;
        head->next = NULL;
    }
    else {
        tail->next = NewNode;
        tail = NewNode;
    }
    size++;
    tail->next = NULL;
}
//Óäàëåíèå
void List::Remove(Node* NewNode) {
    if (head) {
        if (head == NewNode) {
            head = head->next;
        }
        else {
            Node* temp = head;
            while (temp && temp->next != NewNode) {
                temp = temp->next;
            }
            if (temp == NULL) {
                cout << "Удаление ячейки" << endl;
                return;
            }
            else
            if (temp->next == NewNode) {
                if (tail == NewNode) {
                    tail = temp;
                }
                temp->next = NewNode->next;
            }
        }
        delete NewNode;
        size--;
    }
}

//Вывод списка
void List::print()
{
    if (head) {
        Node* temp = head;
        for (; temp->next; temp = temp->next)
        {
            temp->print();
        }
        temp->print();
    }
}






List::~List()
{
       delALL();
}

void List::delALL() {
    while (head) {
        this->Remove(head);
    }
    size = 0;
    head = NULL;
}