#include <unistd.h>

int main (int ac, char **av)
{
   int flag = 0;
   int i = 0;

  if(ac == 2)
  {
    while(av[1][i] == ' ')
      i++;
    while(av[1][i])
    {
     if(av[1][i] == ' ')
       flag = 1;
     else
     {
       if(flag)
       {
         write(1, " ", 1);
         flag = 0;
       }
       write(1, &av[1][i], 1);
     }
     i++;
    }
  }
  write(1, "\n", 1);
  return(0);
}