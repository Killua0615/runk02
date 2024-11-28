#include <stddef.h>
#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
  size_t i = 0;

  while (s1[i] != '\0' || s2[i] != '\0')
  {
      if ((unsigned char)s1[i] != (unsigned char)s2[i])
          return (unsigned char)s1[i] - (unsigned char)s2[i];
      i++;
  }
  return 0;
}

int main() {
    const char *str1 = "apple";
    const char *str2 = "apricot";
    const char *str3 = "apple";

    printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strcmp(str1, str3));

    return 0;
}