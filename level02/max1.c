int		max(int *tab, unsigned int len)
{
  int max;
  unsigned int i = 0;

  if(len == 0)
    return (0);
  max = tab[i];
  while(i < len)
  {
    if(max < tab[i])
      max = tab[i];
    i++;
  }
  return (max);
}

#include <stdio.h>
int main(void)
{
  int x[] = {5, 10, 1, 6, -8};

  int c = max(x, 5);
  printf("%d", c);
}