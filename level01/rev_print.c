#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
  int i = 0;

  while(str[i])
  {
    i++;
  }
  return(i);
}

int rev_print(char *x)
{
  int y = 0;

  y = ft_strlen(x);

  while (y > 0)
  {
      write(1, &x[y - 1], 1);
      y--;
  }
  return (0);
}

int main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}