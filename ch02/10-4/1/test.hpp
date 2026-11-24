#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <vector>
using namespace std;
vector<int> inputNum(int n) {
    vector<int> v;
    cout << "정수 " << n << "개를 입력하시오: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    return v;
}
void printNum(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) cout << ", ";
    }
    cout << endl;
}
#endif
