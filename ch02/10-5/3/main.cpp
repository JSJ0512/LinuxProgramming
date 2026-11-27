#include "test.hpp"
int main() {
    int a[row][col] = {{-5, 2, 35},{-20, 5, 100},{-75, 5, -25} };
    int max= a[0][0];
    int r =0, c= 0;
    for (int i =0;i < row;i++)
        for (int j = 0;j < col;j++)
            if (a[i][j] > max){
                max = a[i][j];
                r =i;
                c= j;
            }
    cout << "최대값은 "<< max << endl;
    cout <<"위치는 "<< r + 1 <<"행 "<< c + 1 << "열"<< endl;
    return 0;
}
