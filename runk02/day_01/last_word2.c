#include <unistd.h>
void last_word(char *str)
{
  int i = 0;
  int j = 0;

  while(str[i])
  {
    if(str[i] == ' ' || (str[i + 1] >= '!' && str[i + 1] <= '~'))
      j = i + 1;
    i++;
  }
  while(str[j] && (str[j] >= '!' && str[j] <= '~'))
  {
    write(1, &str[j], 1);
    j++;
  }
}

int main (int ac, char **av)
{
  if(ac == 2)
    last_word(av[1]);
  write(1, "\n", 1);
  return (0);
}