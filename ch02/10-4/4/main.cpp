#include <iostream>
#include <vector>
#include <algorithm>
#include "test.hpp"
using namespace std;
int main() {
    vector<Student> st;
    vector<Student>::iterator it;
    for (int i = 0; i < 3; i++) {
        string name;
        int sc;
        cout << "이름과 성적을 입력: ";
        cin >> name >> sc;
        st.push_back(Student(name, sc));
    }
    it = max_element(st.begin(), st.end());
    cout << "최우수학생은" << endl;
    it->show();
    return 0;
}
