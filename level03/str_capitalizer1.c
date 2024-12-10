#include <unistd.h>

int str_capitalizer(char *str)
{
  int i = 0;

  while(str[i])
  {
    if(i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t')
    {
      if(str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
    }
    else
    {
      if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
    }
    write(1, &str[i], 1);
    i++;
  }
  return (0);
}

int main(int ac, char **av)
{
  int i = 1;

  if(ac == 1)
  {
    write(1, "\n", 1);
    return (0);
  }

  while(ac > i)
  {
    str_capitalizer(av[i]);
    write(1, "\n", 1);
    i++;  
  }
  return (0);
}