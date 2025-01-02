#include <unistd.h>

void ft_putnbr(int n)
{
  int c = 0;

  if(n > 9)
    ft_putnbr(n / 10);
  c = n % 10 + '0';
  write(1, &c, 1);
}

int ft_atoi(const char *str)
{
  int i = 0;
  int sign = 1;
  int result = 0;

  while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
  if(str[i] == '-' || str[i] == '+')
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

#include <stdio.h>

int main (int ac, char **av)
{
  int i = 1;
  int n = ft_atoi(av[1]);

  if(ac == 1)
  {
    write(1, "\n", 1);
    return (0);
  }
  if(ac == 2)
  {
    while(10 > i)
    {
      ft_putnbr(i);
      write(1, " x ", 3);
      ft_putnbr(n);
      write(1, " = ", 3);
      ft_putnbr(n * i);
      write(1, "\n", 1);
      i++;
    } 
  }
}