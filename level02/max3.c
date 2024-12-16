#include <unistd.h>

int		max(int *tab, unsigned int len)
{
  int max;
  unsigned int i = 0;

  max = tab[0];
  while(tab[i] && i < len)
  {
    if(max < tab[i])
      max = tab[i];
    i++;
  }
  return(max);
}

#include <stdio.h>
int main (void)
{
  int x[] = {10, 5, 100, -14, 2, 200};
  int a = max(x, 6);

  printf("%d\n", a);
}