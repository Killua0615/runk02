#include <unistd.h>

void ft_putnbr(int n)
{
  int c = 0;

  if(n > 9)
    ft_putnbr(n / 10);
  c = (n % 10) + '0';
  write(1, &c, 1);
}


int main (int ac, char **av)
{
  int i = 0;
  (void)av;

  while(ac > i)
    i++;
  i--;
  ft_putnbr(i);
  write(1, "\n", 1);
  return (0);
}