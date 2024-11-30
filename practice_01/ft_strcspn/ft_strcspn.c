#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
  int i = 0;
  int j = 0;

  while(s[i])
  {
    j = 0;
    while(reject[j])
    {
      if(s[i] == reject[j])
      {
        return (i);
      }
      j++;
    }
    i++;
  }
  return (i);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//   const char *s = "hello, world";
//   const char *reject1 = "aeiou"; // 複数文字の reject
//   const char *reject2 = "x";     // 1文字の reject

//   printf("ft_strcspn: %zu\n", ft_strcspn(s, reject1));
//   printf("strcspn:    %zu\n\n", strcspn(s, reject1));

//   printf("ft_strcspn: %zu\n", ft_strcspn(s, reject2));
//   printf("strcspn:    %zu\n", strcspn(s, reject2));

//   return 0;
// }
