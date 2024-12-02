#include <unistd.h>

int ft_atoi(const char *str)
{
  int i = 0;
  int sign = 1;
  int result = 0;

  while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
  while(str[i] == '+' || str[i] == '-')
  {
    if(str[i] == '-')
      sign *= -1;
    i++;
  }
  while(str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10 + (str[i] - '0');
    i++;
  }
  return (result * sign);
}

int gcd(int a, int b)//2つの整数 a と b の最大公約数（GCD）を求めるための効率的なアルゴリズム
{
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac == 3)
	{
		int num1 = ft_atoi(av[1]);
		int num2 = ft_atoi(av[2]);
		int result = gcd(num1, num2);

    printf("%d", result);

	}
	write(1, "\n", 1);
	return 0;
}