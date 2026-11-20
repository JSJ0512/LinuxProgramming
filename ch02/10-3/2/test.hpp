#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <vector>
using namespace std;
void input(vector<int>& v) {
    int n;
    cout << "정수 4개를 입력하시오: ";
    for (int i = 0; i < 4; i++) {
        cin >> n;
        v.push_back(n);
    }
}
int mmax(vector<int>& v) {
    int max = v.at(0);
    vector<int>::iterator it;
    for (it = v.begin() + 1; it != v.end(); it++) {
        if (*it > max) max = *it;
    }
    return max;
}
int mmin(vector<int>& v) {
    int min = v.at(0);
    vector<int>::iterator it;
    for (it = v.begin() + 1; it != v.end(); it++) {
        if (*it < min) min = *it;
    }
    return min;
}
#endif
