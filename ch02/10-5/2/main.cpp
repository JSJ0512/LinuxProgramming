#include "test.hpp"
int main() {
    int score[stu][sub];
    double avg[stu];
    int sum;
    int best =0;
    for (int i = 0;i < stu;i++) {
        cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력: ";
        sum= 0;
        for(int j = 0;j < sub;j++) {
            cin>> score[i][j];
            sum += score[i][j];
        }
        avg[i] = sum / 3.0;
        if (avg[i] > avg[best])
            best = i; 
    }
    cout << "최우수 학생은 " <<best + 1 <<"번째 학생이고 평균점수는 " << avg[best] << "점이다." << endl;
    return 0;
}
