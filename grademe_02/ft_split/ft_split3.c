#include <stdlib.h>
#include <unistd.h>

char *ft_stpncpy(char *dst, const char *src, int n)
{
  int i = 0;

  while(src[i] && i < n)
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
    while(str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
      i++;
    if(str[i])
      wc++;
    while(str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
      i++;
  }
  char **out = (char **)malloc(sizeof(char *) * (wc + 1));
  i = 0;

  while(str[i])
  {
    while(str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
      i++;
    j = i;
    while(str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
      i++;
    if(j < i)
    {
      out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
      ft_stpncpy(out[k++], &str[j], i - j);
    }
  }
  out[k] = NULL;
  return(out);
}

#include <stdio.h>
int main(void)
{
  char *s = "     hello  world\tthis is\nft_split";
  char **result = ft_split(s);
  int i = 0;

  while(result[i])
  {
    printf("%s\n", result[i]);
    i++;
  }
  return (0);
}