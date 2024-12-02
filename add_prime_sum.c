#include <unistd.h>

int is_prime(int n)
{
  int i = 2;

  if (n < 2)
    return (0);
  while (i * i <= n)//√nまで調べれば十分, これ以上大きい数は入らないため
  {
    if (n % i == 0)
      return (0);
    i++;
  }
  return (1);
}

int ft_atoi(char *str)
{
  int i = 0;
  int sign = 1;
  int result = 0;

  while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void ft_putnbr(int n)
{
  int c = 0;

  if(n > 9)
    ft_putnbr(n / 10);
  c = (n % 10) + '0';
  write(1, &c, 1);
}

int main(int ac, char **av)
{
  int n, sum;

  if (ac != 2)
  {
    write(1, "0\n", 2);
    return (0);
  }

  n = ft_atoi(av[1]);
  if (n <= 0)
  {
    write(1, "0\n", 2);
    return (0);
  }

  sum = 0;
  while (n > 0)
  {
    if (is_prime(n))
      sum += n;
    n--;
  }

  ft_putnbr(sum);
  write(1, "\n", 1);
  return (0);
}