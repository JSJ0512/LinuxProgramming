#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "test.hpp"
using namespace std;
int main() {
    vector<string> v = inputWord(5);
    vector<string>::iterator it;
    it = Word(v.begin(), v.end());
    cout << "사전에서 제일 뒤에 나오는 단어는 " << *it << endl;
    return 0;
}
