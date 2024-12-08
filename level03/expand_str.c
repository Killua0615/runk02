#include <unistd.h>

void epur_str(char *str)
{
	int i = 0;
	int flag = 0;

	while (str[i] == ' ')
		i++;

	while (str[i])
	{
		if (str[i] == ' ')
		{
			flag = 1;
		}
		else
		{
			if (flag)
			{
				write(1, "   ", 3);
				flag = 0;
			}
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
