#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
  int i = 0;
  int sign = 1;
  int result = 0;

  if(str_base < 2 || str_base > 16)
    return (0);
  while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
  if(str[i] == '-' || str[i] == '+')
  {
    if(str[i] == '-')
    {
      sign *= -1;
    }
    i++;
  }

  while(str[i])
  {
    int value;

    if(str[i] >= '0' && str[i] <= '9')
      value = str[i] - '0';
    else if(str[i] >= 'a' && str[i] <= 'f')
      value = str[i] - 'a' + 10;
    else if(str[i] >= 'A' && str[i] <= 'F')
      value = str[i] - 'A' + 10;
    else
      break;

    if(value >= str_base)//str_base = 2 の場合、有効な value は 0 または 1。
      break;             //str_base = 16 の場合、有効な value は 0～15。

    result = result * str_base + value;
    i++;
  }
  return (result * sign);
}