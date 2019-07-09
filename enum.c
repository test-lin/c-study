#include <stdio.h>

enum DAY {MON=1, TUE=2, WED=3, THU=4, FRI, SAT, SUN};

int main(int argc, char const *argv[])
{
    enum DAY day;

    int a = TUE;

    printf("a = %d\n", a);

    for (int i = MON; i <= SUN; ++i)
    {
        printf("枚举元素 %d\n", i);
    }

    return 0;
}

/*

现在觉得 c 语言的枚举太鸡肋了，只能用整形数字当下标。

如果想遍历全部枚举值出来，值必需要是连续才行。

*/
