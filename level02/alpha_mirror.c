#include <unistd.h>

int main (int ac, char **av)
{
  int i = 0;
  int c = 0;
  int r = 1;

  if(ac == 2)
  {
    while(av[1][i])
    {
      if(av[1][i] >= 'a' && av[1][i] <= 'm')
      {
        r = 'a' - av[1][i];
        r = 'z' + r;
        write(1, &r, 1);
      }
      else if(av[1][i] >= 'A' && av[1][i] <= 'M')
      {
        r = 'A' - av[1][i];
        r = 'Z' + r;
        write(1, &r, 1);
      }
      else if(av[1][i] >= 'm' && av[1][i] <= 'z')
      {
        r = av[1][i] - 'a';
        r = 'z' - r;
        write(1, &r, 1);
      }
      else if(av[1][i] >= 'M' && av[1][i] <= 'Z')
      {
        r = 'A' + c;
        write(1, &r, 1);
      }
      else
        write(1, &av[1][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
  return (0);
}