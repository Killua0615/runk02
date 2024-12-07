#include <unistd.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
  int i = 0;
  char *s2;

  while(src[i])
    i++;
  s2 = (char *)malloc(sizeof(char) * i + 1);
  if(!s2)
    return (NULL);
  i = 0;
  while(src[i])
  {
    s2[i] = src[i]; 
    i++;
  }
  return (s2);
}

int main(void)
{
  char x[100] = "vsdgb";
  char *y = ft_strdup(x);
  int i = 0;

  while(y[i])
  {
    write(1, &y[i], 1);
    i++;
  }
}