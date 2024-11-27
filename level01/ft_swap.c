#include <stdio.h>

void	ft_swap(int *a, int *b)
{
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;

}

int main(void)
{
  int x = 4;
  int y = 56;

  printf("%d\n", x);
  printf("%d\n\n", y);
  ft_swap(&x, &y);
  printf("%d\n", x);
  printf("%d\n", y);

}