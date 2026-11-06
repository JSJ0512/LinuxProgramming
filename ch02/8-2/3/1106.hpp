#ifndef _1106_HPP
#define _1106_HPP
#include <iostream>
using namespace std;
class Shape {
private:
    int x, y;
public:
    Shape(int x, int y);
    ~Shape();
    int getX();
    int getY();
};
class Circle : public Shape {
private:
    int rad;
public:
    Circle(int x, int y, int radius);
    ~Circle();
    void show();
};
class Rect : public Shape {
private:
    int w, h;
public:
    Rect(int x, int y, int w, int h);
    ~Rect();
    void show();
};
class Triangle : public Shape {
private:
    int w, h;
public:
    Triangle(int x, int y, int w, int h);
    ~Triangle();
    void show();
};
#endif
