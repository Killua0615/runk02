#include <unistd.h>

char    *ft_strrev(char *str)
{
  int i = 0;
  int len = 0;
  int tmp;

  while(str[len])
    len++;
  while(i < len / 2)
  {
    tmp = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = tmp;
    i++;
  }
  return(str);
}

#include <stdio.h>
int main (void)
{
  char x[100] = "dfghjk";
  char *a = ft_strrev(x);
 


  printf("%s", a);

  
}