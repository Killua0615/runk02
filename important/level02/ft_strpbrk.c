#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	
	if (!s1 || !s2)
		return (0);
	while(*s1)
	{
		i = 0;
	  while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;	
	}
	return (NULL);
}//指定された2つの文字列の中で、最初に一致する文字を検索するための関数
//s の中で、accept に含まれる文字のうち、最初に見つかった文字へのポインタを返






// char *ft_strpbrk(const char *s, const char *charset)
// {
//   while (*s)
//   {
//       const char *c = charset;//読み終わった所の内容が失われるから別にいれて比べないといけない
//       while (*c)
//       {
//         if (*s == *c)
//           return (char *)s;//一致した文字の位置を指すポインタを呼び出し元に返している
//         c++;
//       }
//       s++;
//   }
//   return NULL;
// }
//charset に含まれる任意の文字が最初に出現する場所を見つけ、その文字へのポインタを返す。なければNULLなのでシンプルなコード

int main(void)
{
  char x[100] = "hello world";
  char y[100] = "oe";
  char *z;
  char *i;

  z = strpbrk(x, y);
  i = ft_strpbrk(x, y);
  printf("%s\n", z);
  printf("%s", i);
  return (0);
}
