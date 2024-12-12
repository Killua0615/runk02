void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	temp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>
// sort_int_tab のプロトタイプ
void sort_int_tab(int *tab, unsigned int size);

int main(void)
{
	int tab[] = {42, 15, 23, 4, 16, 8};
	unsigned int size = sizeof(tab) / sizeof(tab[0]);

	printf("Before sorting:\n");
	for (unsigned int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	sort_int_tab(tab, size);

	printf("After sorting:\n");
	for (unsigned int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	return 0;
}
