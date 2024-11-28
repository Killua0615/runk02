#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strpbrk(const char *s, const char *charset)
{
  while (*s)
  {
      const char *c = charset;//読み終わった所の内容が失われるから別にいれて比べないといけない
      while (*c)
      {
        if (*s == *c)
          return (char *)s;//一致した文字の位置を指すポインタを呼び出し元に返している
        c++;
      }
      s++;
  }
  return NULL;
}
//charset に含まれる任意の文字が最初に出現する場所を見つけ、その文字へのポインタを返す。なければNULLなのでシンプルなコード

int main(void)
{
  char x[100] = "ng gd";
  char y[100] = "a";
  char *z;
  char *i;

  z = strpbrk(x, y);
  i = ft_strpbrk(x, y);
  printf("%s\n", z);
  printf("%s", i);
  return (0);
}
