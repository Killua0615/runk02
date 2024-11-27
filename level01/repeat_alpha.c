#include <unistd.h>

// void ft_print(int x)
// {
//   char i;

//   i = x + 48;
//   write(1, &i, 1);
// }


int main (int ac, char **av)
{
  int i = 0;
  int x = 0;

  if(ac == 2)
  {
    while(av[1][i])
    {
      if(av[1][i] >= 'A' && av[1][i] <= 'Z')
        x = av[1][i] - 'A' + 1;
      else if(av[1][i] >= 'a' && av[1][i] <= 'z')
        x = av[1][i] - 'a' + 1;
      else
        x = 1;

      while(x > 0)
      {
        write(1, &av[1][i], 1);
        x--;
      }
      i++;
    }
  }
  write(1, "\n", 1);
  return (0);
}