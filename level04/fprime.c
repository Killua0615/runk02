#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 2;
	int nbr;

	if (ac == 2)
	{
		nbr = atoi(av[1]);
		if (nbr == 1)
			printf("1");

		while (nbr > 1)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				nbr = nbr / i;
				if (nbr > 1)
					printf("*");
			}
			else
			{
				i++;
			}
		}
	}
	printf("\n");
	return (0);
}
