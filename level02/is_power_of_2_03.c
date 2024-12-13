
int	    is_power_of_2(unsigned int n)
{
  unsigned int v = 1;

  while(v <= n)
  {
    if(n == v)
      return(1);
    v *= 2;
  }
  return(0);
}

#include <stdio.h>
#include <unistd.h>
int main (void)
{
  unsigned int len[] = {0, 1, 2, 3, 4, 8, 16, 31, 32, 64, 127, 128};
  int i = 0;

  while(i < 12)
  {
    printf("%d\n", is_power_of_2(len[i]));
    i++;
  }
  return (0);
}