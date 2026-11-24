#include <iostream>
#include <vector>
#include "test.hpp"
using namespace std;
int main() {
vector<int> v={30,-7,250,6,120};
vector<int>::iterator it;
cout << "5개의 정수를 입력하세요>> ";
it = my_max_element(v.begin(), v.end());
cout << "최대값: " << *it << endl;
it = my_min_element(v.begin(), v.end());
cout << "최소값: " << *it << endl;
return 0;
}
