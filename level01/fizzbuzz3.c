#include <unistd.h>

void ft_putnbr(int n)
{
  int c = 0;

  if(n > 9)
    ft_putnbr(n / 10);
  c = (n % 10) + '0';
  write(1, &c, 1);
}

int main (void)
{
  int i = 0;

  while(i < 101)
  {
    if(i % 5 == 0 && i % 3 == 0)
      write(1, "fizzbuzz", 8);
    else if(i % 5 == 0)
      write(1, "buzz", 4);
    else if(i % 3 == 0)
      write(1, "fizz", 4);
    else
      ft_putnbr(i);
    write(1, "\n", 1);
    i++;
  }
  return (0);
}