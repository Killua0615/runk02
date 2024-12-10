char    *ft_strrev(char *str)
{
  int len = 0;
  int i = 0;
  int tmp = 0;

  while(str[i])
    len++;
  while(i < len / 2)
  {
    tmp = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = tmp;
    i++;
  }
  return (str);
}