#include "test.hpp"
int main() {
    vector<string> z;
    input(z);
    cout << "사전에서 제일 뒤에 나오는 단어는 " << last(z) << " 입니다." << endl;
    return 0;
}
