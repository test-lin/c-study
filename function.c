#include <stdio.h>

void swap(int x, int y);
void swap2(int *x, int *y);

int main()
{
    int a = 100;
    int b = 200;

    printf("a = %d,b = %d\n", a, b);

    swap(a, b);

    printf("a = %d,b = %d\n", a, b);

    swap2(&a, &b);

    printf("a = %d,b = %d\n", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    return;
}

void swap2(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    return;
}
