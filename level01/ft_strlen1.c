size_t	ft_strlen(char *str)
{
  int i = 0;

  while(str[i])
  {
    i++;
  }
  return(i);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
  char v[10] = "hello";
  char x1;
  char x2;

  x1 = ft_strlen(v);
  x2 = strlen(v);

  printf("%s\n", &x1);
  printf("%s", &x2);

}