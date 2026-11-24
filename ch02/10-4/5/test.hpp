#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <string>
using namespace std;
class Student {
    string name;
    int g , e;
    double avg;
public:
    Student(string name , int g , int e) {
        this-> name = name;
        this->g = g;
        this-> e = e;
        avg = (g +e) / 2.0;
    }
    void show() {
        cout << name << " " << g << " " << e << " " << avg << endl;
    }
    bool operator<(Student st) {
        if (this->avg> st.avg) return true;
        else return false;
    }
};
#endif
