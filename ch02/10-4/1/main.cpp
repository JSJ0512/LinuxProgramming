#include <iostream>
#include <vector>
#include <algorithm>
#include "test.hpp"
using namespace std;
int main() {
    vector<int> v = inputNum(4);
    vector<int>::iterator it;
    it = maxNum(v.begin(), v.end());
    cout << "최대값은 " << distance(v.begin(), it) + 1 << "번째 값 " << *it << endl;
    it = minNum(v.begin(), v.end());
    cout << "최소값은 " << distance(v.begin(), it) + 1 << "번째 값 " << *it << endl;
    sort(v.begin(), v.end());
    cout << "오름차순 결과는 ";
    printNum(v);
    sort(v.begin(), v.end(), greater<int>());
    cout << "내림차순 결과는 ";
    printInts(v);
    return 0;
}
