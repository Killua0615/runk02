#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
  int i = 0;
  int len = (start - end);
  if(len < 0)
    len *= -1;
  len++;
  
  int *res = (int *)malloc(sizeof(int) * len);

  while(len > i)
  {
    res[i] = end;
    if(end > start)
      end--;
    else
      end++;
    i++;
  }
  return(res);
}

#include <stdio.h>
int main (void)
{
  int i = 0;
  int *renge = ft_rrange(1, 5);
  int *orenge = ft_rrange(5, 1);

  if(renge)
  {
    while(i < 5)
    {
      printf("%d ", renge[i]);
      i++;
    }
    free(renge);
    printf("\n");
  }
  
  i = 0;
  if(orenge)
  {
    while(i < 5)
    {
      printf("%d ", orenge[i]);
      i++;
    }
    free(orenge);
    printf("\n");
  }
}