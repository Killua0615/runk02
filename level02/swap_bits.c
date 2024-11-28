unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main(void)
{
	unsigned char input = 0x41; // 0100 0001
	unsigned char result = swap_bits(input);

	printf("Input: 0x%02x, Swapped: 0x%02x\n", input, result); // Input: 0x41, Swapped: 0x14
	return (0);
}