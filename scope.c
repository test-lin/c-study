#include <stdio.h>

int page = 10;
int c = 6;

int get_page_var();

int main()
{
    printf("全局的 page = %d\n", page);

    int page = 14;
    page += 5;
    printf("局部的 page = %d\n", page);

    printf("全局的 page = %d\n", get_page_var());

    int sum(int, int);

    c += sum(page, get_page_var());

    printf("c = %d\n", c);

    return 0;
}

int get_page_var()
{
    return page;
}

int sum(int a, int b)
{
    return a + b;
}
