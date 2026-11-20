#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <vector>
using namespace std;
void input(vector<int>& v) {
    int n;
    cout << "숫자를 입력하세요: ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        v.push_back(n);
    }
}
void printv(vector<int>& v) {
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}
void rm(vector<int>& v) {
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ) {
        if (*it < 0) it = v.erase(it);
        else it++;
    }
}
double av(vector<int>& v) {
    int sum = 0;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        sum += *it;
    return (double)sum / v.size();
}
void printav(double avg) {
    int x = (int)(avg * 10 + 0.5);
    cout << x / 10 << "." << x % 10;
}
#endif
