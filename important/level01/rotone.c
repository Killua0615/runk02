#include <unistd.h>

int main (int ac, char **av)
{
  int i = 0;
  int x = 0;

  if(ac == 2)
  {
    while(av[1][i])
    {
      if((av[1][i] >= 'a' && av[1][i] <= 'y') || (av[1][i] >= 'A' && av[1][i] <= 'Y'))
      {
        x = av[1][i] + 1;
        write(1, &x, 1);
      }
      else if((av[1][i] == 'z') || (av[1][i] == 'Z'))
      {
        x = av[1][i] - 25;
        write(1, &x, 1);
      }
      else
        write(1, &av[1][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
  return (0);
}