#include <unistd.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
  int i = 0;
  int j = 0;
  int cont = 0;

  while(s[i])
  {
    j = 0;
    cont = 0;
    while(accept[j])
    {
      if(s[i] == accept[j])
      {
        cont = 1;
        break ;
      }
      j++;
    }
    if(!cont)
      break ;
    i++;
  }
  return (i);
}

//1つでもないものがあればそこでコードが終了する
#include <stdio.h>
int main(void)
{
  char x[100] = "dfghjk";
  char y[100] = "vbnvdbnvghkf";
  int a = strspn(x, y);
  int b = ft_strspn(x, y);

  printf("%d\n", a);
  printf("%d\n", b);
  return (0);
}