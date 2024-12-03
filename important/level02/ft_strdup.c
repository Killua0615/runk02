#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
  int i = 0;

  while(s[i])
    i++;
  return (i);
}

char *ft_strdup(const char *s1)
{
  char *s2;
  int i = 0;

  s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
  if(!s2)
    return(NULL);
  while(s1[i])
  {
    s2[i] = s1[i];
    i++;
  }
  s2[i] = '\0';
  return(s2);
}//指定された文字列を複製して新しいメモリ領域にコピーする関数

int main (void)
{
  char x[100] = " 456789ghjm,";
  char *z;
  char *a;

  z = strdup(x);
  a = ft_strdup(x);
  printf("%s\n", z);
  printf("%s\n", a);
}