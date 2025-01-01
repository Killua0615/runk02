#include <unistd.h>
char    *ft_strrev(char *str)
{
  int len = 0;
  char tmp = 0;
  int i = 0;

  while(str[len])
    len++;
  
  while(i < len / 2)
  {
    tmp = str[len - 1 - i];
    str[len - 1 - i] = str[i];
    str[i] = tmp;
    i++;
  }
  return (str);
}

#include <stdio.h>
int main (void)
{
  char x[100] = "hello world";

  ft_strrev(x);
  printf("%s", x);
}