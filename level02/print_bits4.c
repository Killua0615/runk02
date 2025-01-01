#include <unistd.h>

void	print_bits(unsigned char octet)
{
  unsigned char mask = 127;

  while(mask > 0)
  {
    if(mask & octet)
      write(1, "1", 1);
    else
      write(1, "0", 1);
    mask >> 1;
  }

}