char    **ft_split(char *str)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int wc = 0;

  while(str[i])
  {
    while(str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
      i++;
    if(str[i])
      wc++;
    while(str[i] && (str[i] != ' ' || str[i] != '\t' || str[i] != '\n'))
  }
}