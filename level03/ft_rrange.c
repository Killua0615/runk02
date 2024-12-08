#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
  int i = 0;
  int len = end - start;
  int *res;

  if(len < 0)
    len *= -1;
  len++;
  
  res = (int *)malloc(sizeof(int) * len);
  if(!res)
    return (NULL);
  
  while(i < len)
  {
    res[i] = end;
    if(start < end)
      end--;
    else
      end++;
    i++;
  }
  return (res);
}

#include <stdio.h>
int main (void)
{
  int *range;
  int *orenge;
  int i = 0;

  range = ft_rrange(1, 5);
  orenge = ft_rrange(5, 1);

  if (range)
  {
    i = 0;
    while (i < 5)
    {
      printf("%d ", range[i]);
      i++;
    }
    printf("\n");
    free(range); // 動的に確保したメモリを解放
  }

  if (orenge)
  {
    i = 0;
    while (i < 5)
    {
      printf("%d ", orenge[i]);
      i++;
    }
    printf("\n");
    free(orenge); // 動的に確保したメモリを解放
  }  
}