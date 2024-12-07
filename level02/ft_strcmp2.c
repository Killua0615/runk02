#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
  int i = 0;

  if(s1[i] && s2[i])
  {
    if(s1[i] != s2[i])
      return(s1[i] - s2[i]);
  }
  return (s1[i] - s2[i]);
}

int main(void)
{
  char x[100] = "b";
  char y[100] = "a";

  int z = strcmp(x, y);
  printf("%d\n", z);
  int n = strcmp(x, y);
  printf("%d\n", n);
  return (0);
}