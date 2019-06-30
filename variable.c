#include <stdio.h>

int x = 1;
int y = 2;

int addTwonum()
{
    extern int x;
    extern int y;

    return x + y;
}

int addTwonum2()
{
    y = 3;

    return x + y;
}

int sum(int x, int y)
{
    return x + y;
}

/**
 * 变量
*/
int main(int argc, char const *argv[])
{
    int result = addTwonum();
    printf("result = %d\n", result);

    int result2 = addTwonum2();
    printf("result2 = %d\n", result2);

    int result3 = sum(x, y);
    printf("result3 = %d\n", result3);

    x = 8;
    int result4 = sum(x, y);
    printf("result4 = %d\n", result4);

    return 0;
}

/*

main 函数里调用的函数和全局变量要放置 main 函数上面，要不然编译会报错。

函数里可以直接使用全局的变量，函数里对全局变量进行修改后面使用的全局变量也会进行改变。如果函数没写好会被全局函数污染。

*/
