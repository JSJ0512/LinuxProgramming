- test.h
----------
-     #ifndef TEST_H
  정의되지 않았는지 확인
-     #define TEST_H
  정의되지 않았다면 정의
-     int input(void);
  정수를 입력 받는 함수
-     int max(int a, int b);
  두 정수를 받는 함수
-     void maxprint(int max);
  max의 값을 출력하는 함수
-     #endif
  헤더 가드 종료
----------
- test.c
----------
-     #include <stdio.h>
  헤더 파일 stdio 
-     #include "test.h"
  test.h의 함수룰 포함함
-     int input(void){
  정수를 입력 받는 함수
-     int a;
  정수 a 선언
-     printf("Input :");
  다음과 같은 텍스트 출력
-     scanf("%d", &a);
  a에 값을 입력 받음
-     return a;}
  a 값을 반환함
-     int max(int a, int b) {
  두 정수를 입력 받아오는 함수
-     if (a > b)
         return a;
      else
         return b;}
  a가b보다 크다면 a값을 반환 , 크지 않다면 b 겂을 반환함
-     void maxprint(int max){
  max값을 출력라는 함수
-     printf("max : %d\n", max);}
  다음과 같은 텍스트를 출력
---------
- main.c
---------
-     #include "test.h"
  test.h 함수를 포함함
-     int main(void){
  메인 함수
-     int a, b, max;
  정수 a,b,max 선언
-     a = input();
  a값에 입력받은 a값을 저장
-     b = input();
  b값에 입력받은 b값을 저장
-     max = max(a, b);
  max 값에 입력받은 두 정수를 저장
-     print(max);
  max를 출력
-     return 0;}
  0의 값 반환
