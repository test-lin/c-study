#include <stdio.h>

void arithmetic();
void relationship();
void logic();
void assignment();
void position();
void other();

/**
 * 运算符
*/
int main(int argc, char const *argv[])
{
    printf("\n==== 算术运算符 ====\n");
    arithmetic();

    printf("\n==== 关系运算符 ====\n");
    relationship();

    printf("\n==== 逻辑运算符 ====\n");
    logic();

    printf("\n==== 赋值运算符 ====\n");
    assignment();

    // printf("\n==== 位运算符 ====\n");
    // position();

    printf("\n==== 杂项运算符 ====\n");
    other();

    return 0;
}


/**
 * 算术运算符
*/
void arithmetic()
{
    int a = 9;
    int b = 2;
    int c, d, e;

    // 加、减、乘、除、取模及递增递减
    printf("a = %d; a + b = %d\n", a, (a + b));
    printf("a = %d; a - b = %d\n", a, (a - b));
    printf("a = %d; a * b = %d\n", a, (a * b));
    printf("a = %d; a / b = %d\n", a, (a / b));
    printf("a = %d; a %% b = %d\n", a, (a % b));
    // 递增递减操作后操作的值都会进行改变，想用赋值给新变量需把符号写在变量前
    c = a;
    d = ++a;
    printf("a = %d; ++a = %d\n", c, d);
    e = --a;
    printf("a = %d; --a = %d\n", d, e);
}

/**
 * 关系运算符
*/
void relationship()
{
    int a = 9;
    int b = 2;
    
    // ==、!= 、>、<、>=、<=
    printf("(%d == %d) = %d\n", a, b, (a == b));
    printf("(%d != %d) = %d\n", a, b, (a != b));
    printf("(%d > %d) = %d\n", a, b, (a > b));
    printf("(%d < %d) = %d\n", a, b, (a < b));
    printf("(%d >= %d) = %d\n", a, b, (a >= b));
    printf("(%d <= %d) = %d\n", a, b, (a <= b));
}

/**
 * 逻辑运算符
*/
void logic()
{
    int a = 1;
    int b = 0;

    // &&（与）、||（或）、!（非）
    printf("(%d && %d) = %d\n", a, b, (a && b));
    printf("(%d || %d) = %d\n", a, b, (a || b));
    printf("(! %d) = %d\n", b, (! b));
}

/**
 * 赋值运算符
*/
void assignment()
{
    int a;

    // =、+=、-=、*=、/=、%=
    a = 4;
    printf("a = %d\n", a);
    a += 2;
    printf("a += 2 = %d\n", a);
    a -= 1;
    printf("a -= 1 = %d\n", a);
    a *= 3;
    printf("a *= 3 = %d\n", a);
    a /= 2;
    printf("a /= 2 = %d\n", a);
    a %= 2;
    printf("a %%= 2 = %d\n", a);

    // TODO <<=、>>=、&=、^=、|=
}

/**
 * 位运算符
 * @todo 觉得不常用不写示例
*/
void position()
{

}

/**
 * 杂项运算符
*/
void other()
{
    int a = 1;
    int* b;

    // sizeof()、&（引用）、*、?:（三元运算符）
    printf("sizeof %d\n", sizeof(a));

    // c 语言里的引用需要通过 * 来配合才可以取到想要的值
    b = &a;
    printf("b = &a = %d\n", *b);
    a += 2;
    printf("a += 2; b = %d\n", *b);

    printf("(1 ? \"true\":\"false\") = %s\n", (1 ? "true":"false"));
}