#include <unistd.h>

char    *ft_strdup(char *src)
{
  int i = 0;
  char *s2;

  while(src[i])
    i++;
  s2 = (char *)malloc(sizeof(char) * (i + 1));
  if(!s2)
    return (NULL);
  i = 0;
  while(src[i])
  {
    s2[i] = src[i];
    i++;
  }
  s2[i] = '\0';
  return (s2);
}