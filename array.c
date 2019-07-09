#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 数组大小定义
    int arr[5];

    for (int i = 0; i < 5; ++i) {
        arr[i] = i;
    }

    for (int i = 5; i >= 0; --i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // 数组值设置
    int arr2[] = {12,3,25,743,134};

    for (int i = 0; i < 5; ++i) {
        arr2[i] = arr2[i] * 3.14;
    }

    for (int i = 0; i < 5; ++i) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    // 多维数组
    int arr3[2][1] = {
        {4},
        {13}
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1; ++j) {
            printf("arr3[%d][%d] = %d\n", i, j, arr3[i][j]);
        }
    }

    return 0;
}
