#include <stdio.h>

/**
 * 循环
 */
int main(int argc, char const *argv[])
{
    int a = 10;
    while(a < 20) {
        if (a == 14) {
            break;
        }

        printf("a = %d\n", a);
        a += 1;
    }

    for (int i = 0; i < 10; ++i) {
        if (i % 2) {
            continue;
        }

        printf("i = %d\n", i);
    }

    a = 11;
    do {
        printf("a = %d\n", a);
        a += 1;
    } while (a < 20);

    return 0;
}
