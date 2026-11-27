#include "test.hpp"
int main() {
    int a[row][col] = {{2, 4},{5, -5}};
    int b[row][col] = {{-2, 3}, {0, -5} };
    int c[row][col];
    for (int i = 0;i < row;i++)
        for (int j = 0;j < col; j++)
            c[i][j] = a[i][j] + b[i][j];
    cout <<"연산결과:" << endl;
    for (int i = 0;i < row;i++) {
        for (int j = 0; j < col; j++)
            cout << c[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
