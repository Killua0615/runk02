#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    unsigned int value = 1;

    while (value <= n)//<=としないとnが1の時、1 は 2^0は2のべき乗なのに0が返ってしまう
    {
        if (value == n)
            return 1;
        value *= 2;
    }
    return 0;
}

int main(void)
{
    unsigned int x[] = {0, 1, 2, 3, 4, 8, 16, 31, 32, 64, 127, 128};
    int size = sizeof(x) / sizeof(x[0]);// 要素数を計算する方法
    int i = 0;

    while (i < size)
    {
        printf("(%u) = %d\n", x[i], is_power_of_2(x[i]));
        i++;
    }
}
 