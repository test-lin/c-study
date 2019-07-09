#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 13;
    int c[] = {1,3,13};

    printf("a 变量地址 = %p\n", &a);
    printf("c 变量地址 = %p\n", &c);

    int *e;
    int *f = NULL;

    e = &a;

    printf("e = %d\n", *e);
    printf("f 变量地址 %p\n", f);

    return 0;
}

/*

指针和 php 里的引用很像，只是使用方式更加的复杂了。

*/
