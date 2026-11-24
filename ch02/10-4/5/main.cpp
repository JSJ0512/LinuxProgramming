#include <iostream>
#include <vector>
#include <algorithm>
#include "test.hpp"
using namespace std;
int main() {
    vector<Student> v;
    vector<Student>::iterator it;
    for (int i = 0; i < 3; i++) {
        string name;
        int g , e;
        cout << i + 1 << "번째 학생의 이름 , 국어 , 영어성적을 입력: ";
        cin >>name >> g>>e;
        v.push_back(Student(name, g, e));
    }
    sort(v.begin(), v.end());
    int s = 1;
    for (it = v.begin(); it != v.end(); it++) {
        cout <<s<< "등 : ";
        it-> show();
        s++;
    }
    return 0;
}
