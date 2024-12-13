#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
  int i = 0;
  int j = 0;

  while(s[i])
  {
    j = 0;
    while(reject[j])
    {
      if(s[i] == reject[j])
      {
        return(i);
      }
      j++;
    }
    i++;
  }
  return(i);
}

#include <string.h>
#include <stdio.h>
int main (void)
{
  char x[100] = "   hgjk";
  char y[100] = "sdgb ";

  int a = strcspn(x, y);
  printf("%d\n", a);
  int b = ft_strcspn(x, y);
  printf("%d\n", b);
}