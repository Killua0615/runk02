#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
  int i = 0;
  int j;

  while (s1[i])
  {
    j = 0;
    while (s2[j])
    {
      if (s1[i] == s2[j])
        return ((char *)&s1[i]);
      j++;
    }
    i++;
  }
  return (NULL);
}
//文字列 s1 の中から、文字集合 s2 に含まれる最初の文字を探し、その位置のポインタを返す

#include <stdio.h>
#include <unistd.h>
int main(void)
{
  char x[100] = "fghjkfhdbaaa";
  char y[100] = "ghjklagbsaa";
  char *a = strpbrk(x, y);
  char *b = ft_strpbrk(x, y);
  int i = 0;
  int j = 0;

  while(a[i])
  {
    write(1, &a[i], 1);
    i++;
  }
  write(1, "\n", 1);
  while(b[j])
  {
    write(1, &b[j], 1);
    j++;
  }
}