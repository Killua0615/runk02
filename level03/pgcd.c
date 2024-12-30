#include <stdio.h>
#include <stdlib.h>

int main(int ac, char const **av)
{
	int nbr1 = atoi(av[1]);
	int nbr2 = atoi(av[2]);

	if (ac == 3)
	{
		if(nbr1 > 0 && nbr2 > 0)
		{
			while (nbr1 != nbr2)//nbr1 と nbr2 が等しくなるまで計算を続ける
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}