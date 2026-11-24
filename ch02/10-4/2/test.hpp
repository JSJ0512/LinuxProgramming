#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> inputWord(int n) {
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s;
        cout << "문자열을 입력하세요: ";
        cin >> s;
        v.push_back(s);
    }
    return v;
}
#endif
