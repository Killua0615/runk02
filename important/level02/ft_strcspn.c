#include <string.h>
#include <unistd.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *charset)
{
  size_t i = 0;
  int j;

  while (s[i] != '\0')
  {
    j = 0;
    while (charset[j] != '\0')
    {
      if (s[i] == charset[j])
          return i;
      j++;
    }
    i++;
  }
  return (i);
}//s の中で最初に reject に含まれる文字が現れる位置

int main (void)
{
  char x[100] ="   ertyhj";
  char y[10] = "lkjh";
  size_t z = 0;
  int a = 0;

  z = strcspn(x, y);
  a = ft_strcspn(x, y);
  printf("%zu\n", z);
  printf("%d", a);
}