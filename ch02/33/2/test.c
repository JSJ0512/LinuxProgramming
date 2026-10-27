#include <stdio.h>
#include "test.h"

int input(void)
{
    int a;
    printf("Input :");
    scanf("%d", &a);
    return a;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void maxprint(int max)
{
    printf("max : %d\n", max);
}
