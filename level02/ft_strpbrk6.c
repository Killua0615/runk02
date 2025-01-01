#include <unistd.h>
char *ft_strpbrk(const char *s, const char *charset)
{
  int i = 0;
  int j = 0;

  while(s[i])
  {
    j = 0;
    while(charset[j])
    {
      if(s[i] == charset[j])
        return (char *)&s[i];
      j++;
    }
    i++;
  }
  return(NULL);

}

#include <string.h>
#include <stdio.h>
int main (void)
{
  char x[100] = "jnsgripngprdgsrgb";
  char y[100] = "fghjkhjh";

  char *c  = strpbrk(x, y);
  char *d  = ft_strpbrk(x, y);

  printf("%s\n", c);
  printf("%s\n", d);
}