#include <unistd.h>

int main(int ac, char **av)
{
  int i = 0;
  int j = 0;

  if (ac == 3)
  {
    while (av[1][i])
    {
      while (av[2][j] && av[2][j] != av[1][i])
        j++;
      if (!av[2][j])
      {
        write(1, "\n", 1);
        return (0);
      }
      i++;
      j++;
    }
    i = 0;
    while (av[1][i])
      write(1, &av[1][i++], 1);
  }
  write(1, "\n", 1);
  return (0);
}
