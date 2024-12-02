#include <unistd.h>
#include <stdio.h>

char	*rev_print(char *str)
{
	int	i = 0;
	
	while(str[i])
		i++;
	while(i >= 0)
  {
		write(1, &str[i], 1);
    i--;
  }
	write(1, "\n", 1);
	return (str);
}

int main(void)
{
  rev_print("Hello world");
  rev_print("tnirp esreveR");
  rev_print("");
}