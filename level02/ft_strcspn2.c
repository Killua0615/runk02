#include <unistd.h>
#include <string.h>
#include <stdio.h>

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
        return (i);
      j++;
    }
    i++;
  }

  return (i);
}

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