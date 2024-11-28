#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    unsigned int value = 1;

    while (value <= n)
    {
        if (value == n)
            return 1;
        value *= 2;
    }
    return 0;
}

int main(void)
{
    unsigned int test_values[] = {0, 1, 2, 3, 4, 8, 16, 31, 32, 64, 127, 128};
    int size = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < size; i++)
        printf("(%u) = %d\n", test_values[i], is_power_of_2(test_values[i]));

    return 0;
}
