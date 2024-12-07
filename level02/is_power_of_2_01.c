int	    is_power_of_2(unsigned int n)
{
  unsigned int v = 1;

  while(v <= n)
  {
    if(n == v)
      return(0);
    v *= 2;
  }
  return (0);
}