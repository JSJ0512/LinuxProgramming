#include "test.hpp"
int main() {
    vector<int> v;
    input(v);
    cout << "최대값은 " << mmax(v) << ", 최소값은 " << mmin(v) << "입니다." << endl;
    return 0;
}
