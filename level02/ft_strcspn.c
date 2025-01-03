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
}
//reject に含まれるいずれかの文字が最初に現れる位置までの長さ（インデックス）を返す

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