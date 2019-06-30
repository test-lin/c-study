#include <stdio.h>

#define LENGTH 10
// #define WIDTH 5
#define NEWLINE "\n"

// const int LENGTH = 10;
const int WIDTH = 5;
const char NEWLINE2 = '\n';

/**
 * 常量
*/
int main(int argc, char const *argv[])
{
    int area = LENGTH * WIDTH;

    printf("area = %d %c %c", area, NEWLINE, NEWLINE2);

    return 0;
}

/*

c 语言的转义和 php 的转义存在差异, php "" 里的才会转义，而 c 只有 '' 里的才是有效的转义

常量定义的方法就两种

#define LENGTH 10

const int WIDTH = 5;

*/
