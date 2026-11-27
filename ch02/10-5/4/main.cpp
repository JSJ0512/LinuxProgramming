#include "test.hpp"
int main() {
    int a[row][col] = {{-5, 2, 35},{-20, 5, 100},{-75, 5, -25} };
    for (int i = 0;i < row;i++)
        for (int j= 0; j <col; j++) {
            if (a[i][j]< 0)
                a[i][j]= 0;
            else
                a[i][j]= 255;
        }
    cout << "수정행렬"<<endl;
    for (int i = 0;i <row;i++) {
        for (int j = 0; j <col; j++)
            cout<<a[i][j]<<"\t";
        cout<< endl;
    }
    return 0;
}
