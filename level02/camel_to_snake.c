#include <unistd.h>

int main (int ac, char **av)
{
  int i = 0;
  int r = 1;

  if(ac == 2)
  {
    while(av[1][i])
    {
      if(av[1][i] >= 'a' && av[1][i] <= 'z')
      {
        write(1, &av[1][i], 1);
      }
      else
      {
        write(1, "_", 1);
        r = av[1][i] + 32;
        write(1, &r, 1);
      }
      i++;
    }
  }
  write(1, "\n", 1);
  return (0);
}