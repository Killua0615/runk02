#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
  int i = 0;
  
  while(s1[i])
    i++;

  char *s2 = (char *)malloc(sizeof(char) * (i + 1));
  if(!s2)
    return(NULL);

  i = 0;
  while(s1[i])
  {
    s2[i] = s1[i];
    i++;
  }
  s2[i] = '\0';
  return (s2);
}

#include <stdio.h>
int main (void)
{
  char x[100] = "sthgsfgagfasdaebg";

  char *y = ft_strdup(x);
  printf("%s", y);
}