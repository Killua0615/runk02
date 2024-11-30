#include <unistd.h>
#include <stdlib.h>

void rev_wstr(char *str)
{
	int i = 0;
	int end;
  int start;

	while (str[i])
		i++;

	end = i;
	while (end > 0)
	{
		while (end > 0 && str[end - 1] != ' ')
			end--;

		start = end;
		while (start < i && str[start] != ' ')//最後と' 'でないとき
		{
			write(1, &str[start], 1);
			start++;
		}

		if (end > 0)
			write(1, " ", 1);//最初の単語以外にはスペースが必要なので、ここでスペースを挿入
		end--;//スペースをスキップ
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
