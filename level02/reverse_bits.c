unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int i = 0;

	while (i < 8)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	unsigned char input = 65; // 01000001
	unsigned char result = reverse_bits(input);

	printf("Input: %d, Reversed: %d\n", input, result); // Input: 65, Reversed: 130
	return (0);
}
