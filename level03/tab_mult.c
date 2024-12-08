#include <unistd.h>

int ft_atoi(char *s)
{
  int i = 0;
  int sign = 1;
  int result = 0;

  while(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
    i++;
  while(s[i] == '-' || s[i] == '+')
  {
    if(s[i] == '-')
      sign *= -1;
    i++;
  }
  while(s[i] >= '0' && s[i] <= '9')
  {
    result = result * 10 + (s[i] - '0');
    i++;
  }
  return(result * sign);
}

void ft_putnbr(int n)
{
  char c;

  if (n >= 10)
      ft_putnbr(n / 10);
  c = n % 10 + '0';
  write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	nbr;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = ft_atoi(argv[1]);
		while (i <= 9 && nbr <= 238609183)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}