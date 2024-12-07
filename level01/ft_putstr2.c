#include <unistd.h>

void	ft_putstr(char *str)
{
  int i = 0;

  while(str[i])
  {
    write(1, &str[i], 1);
    i++;
  }
}

int main (void)
{
  char x[100] = "gjkhjk";

  ft_putstr(x);
  return (0);
}