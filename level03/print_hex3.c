#include <unistd.h>

void ft_putchar(int n)
{
  if(n >= 16)
    ft_putchar(n / 16);
  write(1, &"0123456789abcdef"[n % 16], 1);
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
  if(ac == 2)
  {
    int n = ft_atoi(av[1]);
    ft_putchar(n);
  }
  write(1, "\n", 1);
  return(0);
}