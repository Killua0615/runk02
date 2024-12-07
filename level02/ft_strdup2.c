#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
  char *s2;
  int i = 0;

  if(src[i] != '\0')
  {
    while(src[i])
      i++;
    s2 = (char *)malloc(sizeof(char) * i + 1);
    i = 0;
    while(src[i])
    {
      s2[i] = src[i];
      i++;
    }
    s2[i] = '\0';
  }
  return (s2);
}

int main(void)
{
  char x[100] = "";

  char *y = strdup(x);
  printf("%s\n", y);

  char *a = ft_strdup(x);
  printf("%s", a);

}