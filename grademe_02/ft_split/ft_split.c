#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *dst, const char *src, int len)
{
  int i = 0;

  while(src[i] && i < len)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return(dst);
}

char  **ft_split(char *str)
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
      out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
      ft_strncpy(out[k++], &str[j], i - j);
    }
  }
  out[k] = NULL;
  return (out);
}

// int main(void)
// {
//   char *s = "   Hello   world\tthis is\nft_split  ";
//   char **result = ft_split(s);
//   int i = 0;

//   while(result[i])
//   {
//     printf("%s\n", result[i]);
//     i++;
//   }

//   i = 0;
//   while (result[i])
//   {
//       free(result[i]); // 各単語のメモリを解放
//       i++;
//   }
//   free(result); // 配列全体のメモリを解放

//   return (0);
// }