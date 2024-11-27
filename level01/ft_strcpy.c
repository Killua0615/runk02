#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
  int i;

  i = 0;
  while(s2[i] != '\0')
  {
    s1[i] = s2[i];
    i++;
  }
  s1[i] = '\0';
  return(s1);
}

int main(void)
{
  char x[] = "fghjkl"; 
  char y[10] = "abcdef"; 

  printf("%s\n", x);
  printf("%s\n", y);

  ft_strcpy(x, y); 

  printf("%s\n", x);
  printf("%s\n", y);

  return 0;
}