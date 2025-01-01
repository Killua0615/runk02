#include <unistd.h>

char *ft_stpcpy(char *dst, const char *src)
{
  int i = 0;

  while(src[i])
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return(dst);
}

#include <stdio.h>
int main (void)
{
  char x[100] = "dfghjkl";
  char y[100] = "gd";

  ft_stpcpy(y, x);
  printf("%s", y);
  return (0);
}