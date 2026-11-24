#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "test.hpp"
using namespace std;
int main() {
    vector<string> v = inputWord(5);
    vector<string>::iterator it;
    sort(v.begin(), v.end());
    cout << "사전에서 나오는 순서" << endl;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << endl;
    return 0;
}
