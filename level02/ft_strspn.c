#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t count;
    size_t i;

    count = 0;
    i = 0;
    while (*s)
    {
        while (accept[i] && *s != accept[i])
            i++;
        if (accept[i] == '\0')
            return (count);
        i = 0;
        count++;
        s++;
    }
    return (count);
}

// size_t	ft_strspn(const char *s, const char *accept)
// {
//   int i = 0;
//   int j = 0;
//   int z = 0;
//   int found;

//   while (s[i])
//   {
//       found = 0;
//       j = 0;
//       while (accept[j])
//       {
//         if (s[i] == accept[j])
//         {
//           found = 1;
//           z++;
//           break;
//         }
//         j++;
//       }
//       if (!found)
//           break;
//       i++;
//   }
//   return (z);
// }//文字列の先頭から特定の文字集合（複数の文字）にのみ一致する部分の長さを返す

int main(void)
{
  char x[100] = "dfghj";
  char y[100] = "ghdfgjdf";
  int z = 0;
  int a = 0;

  z = strspn(x, y);
  a = ft_strspn(x, y);
  printf("%d\n", z);
  printf("%d", a);
}