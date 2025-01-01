#include <unistd.h>

size_t ft_strcspn(const char *s, const char *charset)
{
  int i = 0;
  int j = 0;

  while(s[i])
  {
    j = 0;
    while(charset[j])
    {
      if(s[i] == charset[j])
        return (i);
      j++;
    }
    i++;
  }
  return (i);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
  char x[100] = "sthgsfgagfasdaebg";
  char y[100] = "dfghjk";

  int z = strcspn(x, y);
  printf("%d\n", z);
  int n = ft_strcspn(x, y);
  printf("%d\n", n);
  return (0);
}