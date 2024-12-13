#include <unistd.h>

char    *ft_strdup(char *src)
{
  int i = 0;
  int len = 0;

  while(src[len])
    len++;
  char *s2 = (char *)malloc(sizeof(char) * len + 1);
  if(!s2)
    return(NULL);
  while(src[i])
  {
    s2[i] = src[i];
    i++;
  }
  s2[i] = '\0';
  return (s2);
}