 #include <stdlib.h>

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

 char    **ft_split(char *str)
 {
  int i = 0;
  int j = 0;
  int k = 0;
  int wc = 1;

  while(str[i])
  {
    while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
      i++;
    if(str[i])
      wc++;
    while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
      i++;
  }

  char **res = (char **)malloc(sizeof(char *) * wc + 1);
  if(!res)
    return(NULL);
  
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
      res[k] = (char *)malloc(sizeof(char) * i - j + 1);
      if(!res)
        return(NULL);
      ft_strncpy(res[k++], &str[j], i - j);
    }
  }
  res[k] = NULL;
  return(res);
 }

 #include <stdio.h>

int main(void)
{
  int i = 0;
  char x[100] = "      hello    this\nis\tworld  ";
  char **res = ft_split(x);

  while(res[i])
  {
    printf("%s\n", res[i]);
    free(res[i]);
    i++;
  }
  free(res);
  return(0);

}