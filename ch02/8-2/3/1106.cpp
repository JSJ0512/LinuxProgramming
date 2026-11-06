
#include "1106.hpp"
Shape::Shape(int x, int y) {
    this->x = x;
    this->y = y;
    cout << "Shape 생성" << endl;
}
Shape::~Shape() {
    cout << "Shape 소멸" << endl;
}
int Shape::getX() {
    return x;
}
int Shape::getY() {
    return y;
}
Circle::Circle(int x, int y, int rad) : Shape(x, y) {
    this->rad = rad;
    cout << "Circle 생성" << endl;
}
Circle::~Circle() {
    cout << "Circle 소멸" << endl;
}
void Circle::show() {
    cout << "좌표 (" << getX() << "," << getY() << ")에 반지름 " << rad << "인 원" << endl;
}
Rect::Rect(int x, int y, int w, int h)
    : Shape(x, y) {
    this->w = w;
    this->h = h;
    cout << "Rect 생성" << endl;
}
Rect::~Rect() {
    cout << "Rect 소멸" << endl;
}
void Rect::show() {
    cout << "좌표 (" << getX() << "," << getY() << ")에 폭" << w << ", 높이" << h << "인 직사각형" << endl;
}
Triangle::Triangle(int x, int y, int w, int h)
    : Shape(x, y) {
    this->w = w;
    this->h = h;
    cout << "Triangle 생성" << endl;
}
Triangle::~Triangle() {
    cout << "Triangle 소멸" << endl;
}
void Triangle::show() {
    cout << "좌표 (" << getX() << "," << getY() << ")에 밑변" << w << ", 높이" << h << "인 삼각형" << endl;
}
