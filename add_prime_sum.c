#include <unistd.h>

int	ft_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i < nb / i)
	{
		if ((nb % i == 0) || (nb % (i + 2) == 0))
			return (0);
		i += 6;
	}
	return (1);
}

// int is_prime(int n)
// {
//   int i = 2;

//   if (n < 2)
//       return (0);
//   while (i * i <= n)
//   {
//     if (n % i == 0)
//       return (0);
//     i++;
//   }
//   return (1);
// }

int ft_atoi(const char *str)
{
  int res = 0;

  while (*str >= '0' && *str <= '9')
  {
    res = res * 10 + (*str - '0');
    str++;
  }
  return (res);
}

void ft_putnbr(int n)
{
  char c;

  if (n >= 10)
    ft_putnbr(n / 10);
  c = (n % 10) + '0';
  write(1, &c, 1);
}

int main(int argc, char **argv)
{
  int n, sum;

  if (argc != 2)
  {
    write(1, "0\n", 2);
    return (0);
  }

  n = ft_atoi(argv[1]);
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
