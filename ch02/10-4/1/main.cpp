#include <iostream>
#include <vector>
#include <algorithm>
#include "test.hpp"
using namespace std;
int main() {
    vector<int> v = inputNum(4);
    vector<int>::iterator it;
    it = max_element(v.begin(), v.end());
    cout << "최대값은 " << distance(v.begin(), it) + 1 << "번째 값 " << *it << endl;
    it = min_element(v.begin(), v.end());
    cout << "최소값은 " << distance(v.begin(), it) + 1 << "번째 값 " << *it << endl;
    sort(v.begin(), v.end());
    cout << "오름차순 결과는 ";
    printNum(v);
    sort(v.begin(), v.end(), greater<int>());
    cout << "내림차순 결과는 ";
    printNum(v);
    return 0;
}
