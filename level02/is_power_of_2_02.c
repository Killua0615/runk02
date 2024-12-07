int	    is_power_of_2(unsigned int n)
{
  int v = 1;

  while(v <= n)
  {
    if(n == v)
      return (1);
    v *= 2;
  }
  return (0);
}