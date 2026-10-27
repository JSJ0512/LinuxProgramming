- test.h
----------
- #ifndef TEST_H
  헤더 파일 중복 장비
- #define TEST_H
  헤더 파일 중복 장비
- int input(void);
  정수를 입력 받는 함수
- int max(int a, int b);
  두 정수를 받는 함수
- void maxprint(int max);
  max의 값을 출력하는 함수
- #endif
  헤더 가드 종료
----------
- test.c
----------
- #include <stdio.h>
  헤더 파일 stdio 
- #include "test.h"
  test.h의 함수룰 포함함
- int input(void){
  정수를 입력 받는 함수
-     int a;
  정수 a 선언
-     printf("Input :");
  다음과 같은 텍스트 출력
-     scanf("%d", &a);
  a에 값을 입력 받음
-     return a;}
  a 값을 반환함
- int max(int a, int b) {
  두 정수를 입력 받아오는 함수
-     if (a > b)
         return a;
      else
         return b;}
  a가b보다 크다면 a값을 반환 , 크지 않다면 b 겂을 반환함
- void maxprint(int max){
  
-     printf("max : %d\n", max);}
  다음과 같은 텍스트를 출력
