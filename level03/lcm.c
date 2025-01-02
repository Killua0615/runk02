unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)//大きいほうをnに代入
		n = a;
	else
		n = b;
	while (1)//returnされるまで続く
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}

#include <stdio.h>
int main(void)
{
  unsigned int a = 6;
	unsigned int b = 10;
  printf("%u\n", lcm(a, b));
  return (0);
}