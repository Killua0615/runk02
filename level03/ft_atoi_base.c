int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	if (str_base < 2 || str_base > 16)
		return (0);

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while (str[i])
	{
		int value;

		if (str[i] >= '0' && str[i] <= '9')
			value = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			value = str[i] - 'a' + 10;//16進数（base 16）におけるアルファベット（a～f または A～F）の値を正しく数値化するため
		else if (str[i] >= 'A' && str[i] <= 'F')
			value = str[i] - 'A' + 10;//a～f（または A～F）は16進数において、10～15 に対応するので、0から数えるから
		else
			break;

		if (value >= str_base)
			break;

		result = result * str_base + value;
		i++;
	}

	return (result * sign);
}

#include <stdio.h>

int ft_atoi_base(const char *str, int str_base);

int main(void)
{
    const char *test1 = "12fdb3";
    const char *test2 = "-1010";
    const char *test3 = "120";
    const char *test4 = "invalid";

    int base1 = 16;
    int base2 = 2;
    int base3 = 8;
    int base4 = 10;

    printf("Test 1: Input \"%s\" in base %d => %d\n", test1, base1, ft_atoi_base(test1, base1));
    printf("Test 2: Input \"%s\" in base %d => %d\n", test2, base2, ft_atoi_base(test2, base2));
    printf("Test 3: Input \"%s\" in base %d => %d\n", test3, base3, ft_atoi_base(test3, base3));
    printf("Test 4: Input \"%s\" in base %d => %d\n", test4, base4, ft_atoi_base(test4, base4));

    return 0;
}







// #include <stdio.h>

// char to_lower(char c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + ('a' - 'A'));
// 	return (c);
// }

// int get_digit(char c, int digits_in_base)
// {
// 	int max_digit;

// 	if (digits_in_base <= 10)
// 		max_digit = digits_in_base - 1 + '0';
// 	else
// 		max_digit = digits_in_base - 10 - 1 + 'a';

// 	if (c >= '0' && c <= '9' && c <= max_digit)
// 		return (c - '0');
// 	else if (c >= 'a' && c <= 'f' && c <= max_digit)
// 		return (10 + c - 'a');
// 	else
// 		return (-1);
// }

// int ft_atoi_base(const char *str, int str_base)
// {
// 	int result = 0;
// 	int sign = 1;
// 	int digit;

// 	if (str == NULL || str_base < 2 || str_base > 16)
// 		return 0;

// 	if (*str == '-')
// 	{
// 		sign = -1;
// 		++str;
// 	}

// 	while (*str)
// 	{
// 		digit = get_digit(to_lower(*str), str_base);
// 		if (digit == -1)
// 			break;
// 		result = result * str_base + digit;
// 		++str;
// 	}
// 	return (result * sign);
// }