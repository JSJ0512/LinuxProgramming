- test.hpp
--------
-     #ifndef TEST_HPP
  정의되지 않았는지 확인
-     #define TEST_HPP
  정의되지 않았다면 정의
-     class Adder {
  클래스 Adder 선언
-     private:
  외부에서 접근 금지
-      int a,b,sum;
  정수 a,b,sum 선언
-     public:
  외부에서 접근 가능
-     void input();
  Input 함수 선언 
-     void add()
  add 함수 선언
-     void print();};
  print함수 선언
-     #endif
  헤더 가드 종료
-------
- test.cpp
-------
-     #include <iostream>
  C++ 입출력을 위한 헤더 파일 
-     #include "test.hpp"
  test.hpp 를 포함함
-     using namespace std;
  std를 생략 시킴
-     void Adder::input(){
  Adder클래스의 함수 Input 정의
-     cout << "Input :";
  다음과 같은 텍스트 출력
-     cin >> a;
  a에 값을 입력 받음
-     cout << "Input :";
  다음과 같은 텍스트를 출력
-     cin >> b;}
  b에 값을 입력 받음
-     void Adder::add(){sum = a+b;}
  Adder클래스의 함수 add 정의 sum에 a+b 값을 저장
-     void Adder::print()
  Adder클래스의 함수 print 정의
-     {cout << "max :" << sum << endl;}
  다음과 같은 텍스트를 출력
-------
- main.cpp
-------
-     #include "test.hpp"
  test.hpp를 포함함
-     int main(void){
  메인 함수 정의
-     Adder a;
  Adder클래스의 a 객체 
-     a.input();
  a함수에 input 호출하여 정수 2개를 입력함
-     a.add();
  a함수에 add 호출하여 합을 계산함
-     a.print();
  a함수에 print 호출하여 결과를 출력함
-     return 0;}
  0을 반환함
