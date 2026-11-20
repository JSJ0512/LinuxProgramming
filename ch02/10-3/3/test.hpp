#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string lower(string s) {
    for (long unsigned int i = 0; i < s.size(); i++) {
        if (s.at(i) >= 'A' && s.at(i) <= 'Z')
            s.at(i) = s.at(i) + ('a' - 'A');
    }
    return s;
}
void input(vector<string>& z) {
    string w;
    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        getline(cin, w);
        z.push_back(w);
    }
}
string last(vector<string>& z) {
    string l = z.at(0);
    for (long unsigned int i = 1; i < z.size(); i++) {
        if (lower(l) < lower(z.at(i))) l = z.at(i);
    }
    return l;
}
#endif
