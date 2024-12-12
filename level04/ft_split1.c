#include <unistd.h>
#include <stdlib.h>

char *ft_strncpy(char *dst, const char *src, int len)
{
  int i = 0;

  while(i < len && src[i])
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
  char **out = (char **)malloc(sizeof(char *) * (wc + 1));
  if(!out)
    return (NULL);
  i = 0;

  while(str[i])
  {
    while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
      i++;
    j = i;
    while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
      i++;
    if(j < i)
    {
      out[k] = (char *)malloc(sizeof(char) * (i - j + 1));
      if(!out[k])
       return (NULL);
      ft_strncpy(out[k++], &str[j], i - j);
    }
  }
  out[k] = NULL;
  return (out);
}

#include <stdio.h>
int main(void)
{
  char str[] = "Hello   world\tthis is   a test";
  char **result = ft_split(str);

  int i = 0;
  while (result[i]) // whileを使用してループ
  {
    printf("Word %d: %s\n", i + 1, result[i]);
    free(result[i]); // 各単語のメモリを解放
    i++;
  }
  free(result); // 配列自体を解放

  return 0;
}