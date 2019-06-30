#include <stdio.h>

void ifelse()
{
    if (a) {
        printf("判断 if 输出\n");
    }

    if (! a) {
        printf("flase 输出\n");
    } else {
        printf("true 输出\n");
    }

    if (a < 1) {
        printf("错误输出\n");
    } else if (a == 1) {
        printf("正确输出\n");
    } else {
        printf("最后输出\n");
    }
}

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;

    ifelse();

    switch(b) {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        default:
            printf("default\n");
            break;
    }

    char c;
    c = 1 < a ? "大于1" : "小于或等于1";
    printf("%s\n", c);

    return 0;
}
