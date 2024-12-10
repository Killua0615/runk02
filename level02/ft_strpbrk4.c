
char	*ft_strpbrk(const char *s1, const char *s2)
{
  int i = 0;
  int j = 0;

  while(s1[i])
  {
    j = 0;
    while(s2[j])
    {
      if(s1[i] == s2[j])
      {
        return (char *)&s1[i];
      }
      j++;
    }
    i++;
  }
  return(0);
}

#include <stdio.h>
#include <string.h>

int main (void)
{
  char x[100] =  "";
  char y[100] = "";

  char *a = strpbrk(x, y);
  printf("%s\n", a);
  char *b = ft_strpbrk(x, y);
  printf("%s\n", b);

  return (0);
}