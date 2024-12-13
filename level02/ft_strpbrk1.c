#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
  int i = 0;

  if(!s1 || !s2)
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
}

int main(void)
{
  char x[100] = "fsdcsghjkfhdbaaa";//まずfがyの中にないか探す。その後sがないか探しあったので、その先頭ポインタを返す
  char y[100] = "ghjklagbsaa";
  

  char *z = strpbrk(x, y);
  if (z != NULL) 
  {
    printf("%s\n", z);
  } 
}