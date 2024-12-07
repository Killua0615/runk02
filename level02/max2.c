
int		max(int* tab, unsigned int len)
{
  int max = 0;
  int i = 0;

  max = tab[i];
  while(i < len)
  {
    if(max < tab[i])
      max = tab[i];
    i++;
  }
  return (max);
}