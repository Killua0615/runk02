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

//day_01
//push忘れ
//文字の途中に\tなどが途中で入った時にに対応できていなかった
// ./a.out "rtyui  dfghj" | cat -e
// ./a.out "    " | cat -e
// ./a.out "jytDSF   6" | cat -e
// ./a.out "jytDSF     " | cat -e
//上記の出力が全てできるコードではなかった