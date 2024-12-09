int mina(int ac,  char **av)
{
  int nbr1 = atoi(av[1]);
  int nbr2 = atoi(av[2]);

  if(ac == 3)
  {
    if(nbr1 > 0 && nbr2 > 0)
    {
      while(nbr2 != 0)
      {
        int tmp = nbr2;
        nbr2 = nbr1 % nbr2;
        nbr1 = tmp;
      }
      printf("%d", nbr1);
    }
  }
  printf("\n");
  return (0);
}