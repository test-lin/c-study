#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
数据类型

整数(int)类型
浮点(float)类型
void 类型
*/
int main(int argc, char const *argv[])
{
    printf("int 存储大小: %lu \n", sizeof(int));
    printf("char 值范围: %E < value < %E \n", CHAR_MIN, CHAR_MAX);
    printf("char 无符号值范围: 0 < value < %d \n", UCHAR_MAX);

    printf("long 值范围: %E < value < %E \n", LONG_MIN, LONG_MAX);
    printf("long 无符号值范围: 0 < value < %d \n", ULONG_MAX);

    printf("\n================================\n");

    printf("float 存储大小: %d \n", sizeof(float));
    printf("值范围: %E < value < %E \n", FLT_MIN, FLT_MAX);
    printf("值位数: %d \n", FLT_DIG);

    return 0;
}

/*

一开始我以为只需要引入 stdio.h 就可以输出 float 类型的常量 FIL_MIN。但是编译时报错了说找不到。
我看了下教程里的代码，发现他是有引用 float.h 文件的。

#include 是预处理器指令，也有人叫他 头文件

linux 会在 /usr/include /usr/local/include 中进行查找文件并进行加载
windows 则是在 E:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\i686-w64-mingw32\include 中进行查找

note: 预处理器指令文件查找技巧
利用 sublime 编辑器的文件查找功能。直接把 E:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32 加到 sublime 中。

*/
