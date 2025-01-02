#include <unistd.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
  unsigned int n = 0;

  if(a == 0 || b == 0)
    return(0);
  if(a > b)
    n = a;
  else
    n = b;
  
  while(1)
  {
    if(n % a == 0 && n % b == 0)
      return(n);
    n++;
  }
}

int main(void)
{
  unsigned int a = 100;
	unsigned int b = 10;
  printf("%d\n", lcm(a, b));
  return (0);
}