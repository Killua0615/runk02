#include <unistd.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
  int i = 0;
  int len = (start - end);
  if(len < 0)
    len *= -1;
  len++;

  int *res = (int *)malloc(sizeof(int) * len);
  if(!res)
    return(NULL);

  while(len > i)
  {
    res[i] = start;
    if(start < end)
      start++;
    else
      start--;
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

  range = ft_range(1, 5);
  orenge = ft_range(5, 1);

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

  return (0);
}