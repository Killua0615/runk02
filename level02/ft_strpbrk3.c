#include <unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
  int i = 0;
  int j = 0;

  while(s1[i])
  {
    j = 0;
    while(s2[j])
    {
      if(s1[i] == s2[j])
        return ((char *)&s1[i]);
      j++;
    }
    i++;
  }
  return (NULL);
}
//文字列 s1 の中から、文字集合 s2 に含まれる最初の文字を探し、その位置のポインタを返す