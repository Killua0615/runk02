#include <unistd.h>

int main (int ac, char **av)
{
	int i;
	int j = 1;
	int x;

	if (ac > 1)
	{
		while (j < ac)
		{
			i = 0;
			while (av[j][i])
			{
				if ((av[j][i] >= 'A' && av[j][i] <= 'Z') && !(av[j][i + 1] == ' ' || av[j][i + 1] == '\0' || av[j][i + 1] == '\t'))
				{
					x = av[j][i] + 32;
					write(1, &x, 1);
				}
				else if ((av[j][i] >= 'a' && av[j][i] <= 'z') && (av[j][i + 1] == ' ' || av[j][i + 1] == '\0' || av[j][i + 1] == '\t'))
				{
					x = av[j][i] - 32;
					write(1, &x, 1);
				}
				else
				{
					write(1, &av[j][i], 1);
				}
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}