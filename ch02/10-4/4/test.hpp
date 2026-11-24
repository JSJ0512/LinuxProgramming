#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <string>
using namespace std;
class Student {
    string name;
    int sc;
public:
    Student(string name, int sc) {
        this->name = name;
        this->sc = sc;
    }
    void show() {
        cout << "이름:" << name << endl;
        cout << "성적:" << sc << "점" << endl;
    }
    bool operator<(Student st) {
        if (this->sc < st.sc) return true;
        else return false;
    }
};
#endif
