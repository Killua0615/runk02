#include <unistd.h>

int main(int argc, char **argv)
{
	char *str;
	int i = 0;
	int first_word_start = 0;
	int first_word_end = 0;

	if (argc > 1)
	{
		str = argv[1];
		while (str[i] == ' ' || str[i] == '\t') 
			i++;
		first_word_start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		first_word_end = i;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i]) {
			while (str[i])
			{
				if (str[i] == ' ' || str[i] == '\t')
				{
					while (str[i] == ' ' || str[i] == '\t')
						i++;
					if (str[i])
						write(1, " ", 1);
				} 
				else 
				{
					write(1, &str[i], 1);
					i++;
				}
			}
			write(1, " ", 1);
		}
		i = first_word_start;
		while (i < first_word_end)
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
