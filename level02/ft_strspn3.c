#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
  size_t i = 0;
  size_t j = 0;
  size_t con = 0;

  while(s[i])
  {
    j = 0;
    while(accept[j])
    {
      if(s[i] == accept[j])
      {
        con++;
        break;
      }
      j++;
    }
    if(accept[j] == '\0')
      return (con);
    i++;
  }
  return (con);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
  char x[100] = "bsgf2345dbd";
  char y[100] = "aveg1342r5sfbds";

  char a = strspn(x, y);
  printf("%d\n", a);
  char b = ft_strspn(x, y);
  printf("%d\n", b);

}