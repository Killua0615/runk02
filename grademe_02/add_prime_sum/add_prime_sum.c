#include <unistd.h>

int ft_prime(int n)
{
  int i = 2;
  if(n < 2)
    return (0);
  while(i * i <= n)
  {
    if(n % i == 0)
      return(0);
    i++;
  }
  return(1);
}

int ft_atoi(char *s)
{
  int i = 0;
  int sign = 1;
  int result = 0;

  while(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
    i++;
  while(s[i] == '-' || s[i] == '+')
  {
    if(s[i] == '-')
      sign *= -1;
    i++;
  }
  while(s[i] >= '0' && s[i] <= '9')
  {
    result = result * 10 + (s[i] - '0');
    i++;
  }
  return(result * sign);
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
  int n = 0;
  int sum = 0;

  if(ac != 2)
  {
    write(1, "0\n", 2);
    return (0);
  }

  n = ft_atoi(av[1]);
  if(n <= 0)
  {
    write(1, "0\n", 2);
    return (0);
  }
  
  while(n > 0)
  {
    if (ft_prime(n))
      sum += n;
    n--;
  }
  ft_putnbr(sum);
  write(1, "\n", 1);
}