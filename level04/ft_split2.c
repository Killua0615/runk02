#include <unistd.h>
#include <stdlib.h>

char *ft_strncpy(char *dst, const char *src, int len)
{
  int i = 0;

  while(src[i] && len > i)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return (dst);
}

char    **ft_split(char *str)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int wc = 0;

  while(str[i])
  {
    while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
      i++;
    if(str[i])
      wc++;
    while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
      i++;
  }

  char **out = (char **)malloc(sizeof(char *) * wc + 1);
  if(!out)
    return(NULL);
  i = 0;

  while(str[i])
  {
    while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
      i++;
    j = i;
    while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
      i++;
    if(i > j)
    {
      out[k] = (char *)malloc(sizeof(char) * (i - j + 1));
      ft_strncpy(out[k++], &str[j], i - j);
    }
  }
  out[k] = NULL;
  return (out);
}

#include <stdio.h>
int main (void)
{
  char x[100] = "      hello    this\nis\tworld  ";
  char **result = ft_split(x);
  int i = 0;

  while(result[i])
  {
    printf("%s\n", result[i]);
    free(result[i]);
    i++;
  }
  free(result);
  return (0);
}