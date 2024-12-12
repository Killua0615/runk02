#include <stdlib.h>

static int	ft_len(int nbr)
{
	int	len = 0;

	if (nbr <= 0)
		len = 1;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len = ft_len(nbr);
	char	*str = (char *)malloc(sizeof(char) * (len + 1));
	long	num = nbr;

	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}

	if (nbr == 0)
	{
		len--;           // len = 4、str[4] = '\0'
		str[len] = '0';  // 文字列の終端
	}
	else
	{
		while (len > 0 && num > 0)
		{
			str[len - 1] = (num % 10) + '0';
			num = num / 10;
			len--;        //後ろから埋めているのでlen--;になる
		}
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char *result;

	result = ft_itoa(-12345);
	printf("%s\n", result);
	free(result);

	result = ft_itoa(0);
	printf("%s\n", result);
	free(result);

	result = ft_itoa(42);
	printf("%s\n", result);
	free(result);

	return (0);
}