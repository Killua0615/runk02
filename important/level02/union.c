#include <unistd.h>

void    print_union(char *str1, char *str2)
{
  int appeared[256] = {0};
  int i = 0;

  while (str1[i])
  {
    if (!appeared[(unsigned char)str1[i]])
    {
      write(1, &str1[i], 1);
      appeared[(unsigned char)str1[i]] = 1;
    }
    i++;
  }

  i = 0;
  while (str2[i])
  {
    if (!appeared[(unsigned char)str2[i]])
    {
      write(1, &str2[i], 1);
      appeared[(unsigned char)str2[i]] = 1;
    }
    i++;
  }
}

int     main(int argc, char **argv)
{
  if (argc == 3)
    print_union(argv[1], argv[2]);
  write(1, "\n", 1);
  return (0);
}
