#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
  int i = 0;
  int len = 0;

  if (start <= end)
    len = end - start + 1;
  else
    len = start - end + 1;

  int *res = (int *)malloc(sizeof(int) * len);
  if(!res)
    return (NULL);

  while(len > i)
  {
    res[i] = end;
    if(start < end)
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
  int *renge;
  int *orenge;
  int i = 0;

  renge = ft_rrange(5, 1);
  orenge = ft_rrange(1, 5);

  if(renge)
  {
    while(i < 5)
    {
      printf("%d ", renge[i]);
      i++;
    }
  }
  printf("\n");
  free(renge);

  i = 0;
  if(orenge)
  {
    while(i < 5)
    {
      printf("%d ", orenge[i]);
      i++;
    }
  }
  free(orenge);
  printf("\n");
}