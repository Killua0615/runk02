#include <stdlib.h>

int     *ft_range(int start, int end)
{
  int i = 0;
  int len = end - start; //絶対値を求める。数値の大きさ、符号を無視したもの
  int *res;

  if (len < 0)
    len *= -1;

  res = (int *)malloc(sizeof(int) * len);
  if(!res)
    return (NULL);

  while (i < len)
  {
    res[i] = start;
    if(start < end)
      start++;
    else                            //減っていく時の処理
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