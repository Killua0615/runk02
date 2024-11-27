#include <unistd.h>

void ft_print(int n)
{
  char x;

  if(n > 9)
    ft_print(n / 10);
  x = (n % 10) + 48;
  write(1, &x, 1);
}

int main(void)
{
  int i = 1;

  while(i < 101)
  {
    if(i % 3 == 0 && i % 5 == 0)
    {
      write(1, "fizzbuzz", 8);
    }
    else if(i % 5 == 0)
    {
      write(1, "buzz", 4);
    }
    else if(i % 3 == 0)
    {
      write(1, "fizz", 4);
    }
    else
    {
      ft_print(i);
    }
    write(1, "\n", 1);
    i++;
  }
}