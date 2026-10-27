#include "test.h"

int main(void)
{
    int a, b, max;

    a = input();
    b = input();
    max = max(a, b);
    maxprint(max);

    return 0;
}
