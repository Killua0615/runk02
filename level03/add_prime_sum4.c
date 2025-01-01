#include <unistd.h>

int add_prime(int n)
{
  int i = 2;

  if(i * i <= n)
  {
    if(n % i == 0)
      return (0);
    return (1);
  }
  return (1);
}

int ft_atoi(const char *str)
{
  int i = 0;
  int sign = 1;
  int result = 0;

  while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
  if(str[i] == '+' || str[i] == '-')
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

void ft_putchar(int n)
{
  int c = 0;

  if(n > 9)
    ft_putchar(n / 10);
  c = n % 10 + '0';
  write(1, &c, 1);
}

#include <stdio.h>
int main (int ac, char **av)
{
  int i = 0;
  int sum = 0;

  if(ac != 2)
  {
    write(1, "0\n", 2);
    return(0);
  }

  int n = ft_atoi(av[1]);
  if(n < 0)
  {
    write(1, "0\n", 2);
    return(0);
  }

  sum = 0;
  i = 2;
  while(i <= n)
  {
    if(add_prime(i))
      sum += i;
    i++;
  }

  ft_putchar(sum);
  write(1, "\n", 1);
  return (0);
}
