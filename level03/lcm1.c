unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0) //除数×商
			return (n);
		n++;
	}
}

#include <stdio.h>
int main(void)
{
  unsigned int a = 100;
	unsigned int b = 10;
  printf("%u\n", lcm(a, b)); //10
  return (0);
}