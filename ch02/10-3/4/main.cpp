#include "test.hpp"
int main() {
    vector<int> v;
    input(v);
    cout << "초기 벡터 원소 : ";
    printv(v);
    rm(v);
    cout << "음수를 삭제 후 벡터원소 : ";
    printv(v);
     if (v.empty())
        cout << "평균값 계산 불가" << endl;
    else {
        cout << "평균값 : ";
        printav(av(v));
        cout << endl;
    }
    return 0;
}
