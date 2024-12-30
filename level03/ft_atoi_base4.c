#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
  int i = 0;
  int sign = 1;
  int result = 0;

  while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
  if(str[i] == '-' || str[i] == '+')
  {
    if(str[i] == '-')
      sign *= -1;
    i++;
  }

  while(str[i])
  {
    int v = 0;

    if(str[i] >= '0' && str[i] <= '9')
      v = str[i] - '0';
    else if(str[i] >= 'a' && str[i] <= 'f')
      v = str[i] - 'a' + 1;
    else if(str[i] >= 'A' && str[i] <= 'F')
      v = str[i] - 'A' + 1;
    else
      break;
    
    if(v >= str_base)
      break;
    result = result * str_base + v;
  }
  return (result * sign);
}