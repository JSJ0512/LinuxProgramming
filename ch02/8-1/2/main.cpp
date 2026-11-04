#include "aa.h"
int main()
{
    Circle x;
    Rect y;
    Triangle z;
    Shape* shape = nullptr;
    x.setCircle(0, 0, 2);
    y.setRect(1, 1, 5, 10);
    z.setTriangle(2, 2, 3, 4);
    shape = &x;
    ((Circle*)shape)->show();
    shape = &y;
    ((Rect*)shape)->show();
    shape = &z;
    ((Triangle*)shape)->show();
    return 0;
}
