
int	ft_atoi_base(const char *str, int str_base)
{
  int i = 0;
  int sign = 1;
  int result = 0;

  if(str_base > 2 || str_base > 16)
    return (0);
  while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
  if(str[i] == '-' || str[i] == '+')
  {
    if(str[i] == '-')
      sign = -1;
    i++;
  }

  while(str[i])
  {
    int v;

    if(str[i] >= '0' && str[i] <= '9')
     v = str[i] - '0';
    else if (str[i] >= 'a' && str[i] <= 'f')
      v = str[i] - 'a' + 10;
    else if (str[i] >= 'A' && str[i] <= 'F')
      v = str[i] - 'A' + 10;
    else
      break;

    if(v >= str_base)
      break;
    
    result = result * str_base + v;
    i++;
  }
  return (result * sign);
}

int main (void)
{
  const char *test1 = "12fdb3";

  int base1 = 16;

  printf("Test 1: Input \"%s\" in base %d => %d\n", test1, base1, ft_atoi_base(test1, base1));
  return 0;
}