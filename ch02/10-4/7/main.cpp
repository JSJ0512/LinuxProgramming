#include <iostream>
#include <vector>
#include "test.hpp"
using namespace std;
int main() {
    vector<int> v={30,-7,250,6,120};
    vector<int>::iterator it;
    my_sort(v.begin(), v.end());
    for (it = v.begin(); it < v.end(); it++)
    cout << *it << ' ';
    cout << endl;
    return 0;
    
}
