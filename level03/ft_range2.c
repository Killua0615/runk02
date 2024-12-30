#include <stdlib.h>

int     *ft_range(int start, int end)
{
  int i = 0;
  int len = (start - end);
  if(len < 0)
    len *= -1;
  len++;

  int *res = (int *)malloc(sizeof(int) * len);
  if(!res)
    return (NULL);
  
  while(len > i)
  {
    if(start < end)
      start++;
    else
      start--;
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

  renge = ft_range(1, 5);
  orenge = ft_range(5, 1);

  while(renge)
  {
    printf("%d ", renge[i]);
    i++;
  }
  printf("\n");

    while(orenge)
  {
    printf("%d ", renge[i]);
    i++;
  }
  printf("\n");

}