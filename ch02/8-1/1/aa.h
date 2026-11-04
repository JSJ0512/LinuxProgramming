#ifndef AA_H
#define AA_H
class Shape {
private:
    int x, y
public:
    void set(int x, int y);
    void a() const;
};
class Circle : public Shape {
private:
    int rad;
public:
    void setCircle(int x, int y, int rad);
    void show() const;
};
class Rect : public Shape {
private:
    int w, h;
public:
    void setRect(int x, int y, int w, int h);
    void show() const;
};
class Triangle : public Shape {
private:
    int n, h;
public:
    void setTriangle(int x, int y, int n, int h);
    void show() const;
};
#endif
