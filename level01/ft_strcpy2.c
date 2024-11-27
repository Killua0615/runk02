char    *ft_strcpy(char *s1, char *s2)
{
  int i = 0;

  while(s2[i])
  {
    s1[i] = s2[i];
    i++;
  }
  s1[i] = '\0';
  return(s1);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
  char x[10] = "sdfb";
  char y[10] = "hbnk";
  char x1[10] = "sdfb";
  char y2[10] = "hbnk";

  printf("%s\n", x);
  printf("%s\n\n", y);
  ft_strcpy(y, x);
  printf("%s\n", x);
  printf("%s\n\n\n", y);

  printf("%s\n", x1);
  printf("%s\n\n", y2);
  ft_strcpy(y2, x1);
  printf("%s\n", x1);
  printf("%s\n", y2);
  return (0);
}