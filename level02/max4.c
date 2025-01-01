#include <unistd.h>

int		max(int *tab, unsigned int len)
{
  unsigned int i = 0;
  int max = tab[0];
  
  while (tab[i] && len > i)
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
  int len[] = {5, 25, 100, 50};
  int a = max(len, 4);

  printf("%d\n", a);
}