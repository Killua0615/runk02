char    *ft_strrev(char *str)
{
  int i = 0;
  int len = 0;
  char tem;

  while(str[len])
    len++;
  while(i < len / 2)
  {
    tem = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = tem;
  }
  return(str);
}
