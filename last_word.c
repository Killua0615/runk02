#include <unistd.h>

int main(int ac, char **av)
{
  int i = 0;

  if (ac == 2)
  {
    while (av[1][i])
      i++;
    i--;
    while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
      i--;
    int end = i;
    while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
      i--;
    i++;
    while (i <= end)
    {
      write(1, &av[1][i], 1);
      i++;
    }
  }
  write(1, "\n", 1);
  return 0;
}

//-------------------------------------------//
#include <unistd.h>

void	last_word(char *str)
{
	int j = 0;
	int i = 0;

	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)//次の文字が印字可能文字を、単語の開始位置と判断し、その位置をjに記録
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

