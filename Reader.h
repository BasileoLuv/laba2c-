#pragma once

#include "MyString.h"
#include "List.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Reader {

public:
    MyString *read(const char *fileName) {
        string line;
        string output;
        ifstream myfile(fileName);
        MyString *str;
        if (myfile.is_open()) {
            cout << "\t=================================================" << endl;
            while (getline(myfile, line)) {
                line += '\n';
                output += line;
                cout << "\t | " << line;
            }
            str = new MyString(output.c_str());
            myfile.close();
            cout << "\t=================================================" << endl;
            return str;
        } else {
            cout << "Unable to open file";
            return NULL;
        }
    }


    void read(const char *fileName, List* list) {
        string line;
        ifstream myfile(fileName);
        if (myfile.is_open()) {
            cout << "\t=================================================" << endl;
            while (getline(myfile, line)) {
                line += '\n';
                list->Insert(new Node(line.c_str()));
                cout << "\t | " << line;
            }
            myfile.close();
            cout << "\t=================================================" << endl;
        } else {
            cout << "Unable to open file";
            return;
        }
    }
};