#include <iostream>
#include "aa.h"
using namespace std;
void Shape::a() const
{
    cout << "좌표 (" << x << "," << y << ")에 ";
}
void Circle::setCircle(int x, int y, int rad)
{
    this->x = x;
    this->y = y;
    this->rad = rad;
}
void Circle::show() const
{
    a();
    cout << "반지름 " << rad << "인 원" << endl;
}
void Rect::setRect(int x, int y, int w, int h)
{
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
}
void Rect::show() const
{
    a();
    cout << "폭 " << w << ", 높이 " << h << "인 직사각형" << endl;
}
void Triangle::setTriangle(int x, int y, int n, int h)
{
    this->x = x;
    this->y = y;
    this->n = n;
    this->h = h;
}
void Triangle::show() const
{
    a();
    cout << "밑변 " << n << ", 높이 " << h << "인 삼각형" << endl;
}
