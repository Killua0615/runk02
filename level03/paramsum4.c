#include <unistd.h>

void ft_putnbr(int n)
{
  int c = 0;

  if(n > 9)
    ft_putnbr(n % 10);
  c = n % 10 + '0';
  write(1, &c, 1);
}

int main (int ac, char **av)
{
  int i = 0;
  (void)av;

  if(ac == 1)
  {
    write(1, "0\n", 2);
    return (0);
  }

  while(ac > i)
    i++;

  ft_putnbr(i - 1);
  return (0);
}