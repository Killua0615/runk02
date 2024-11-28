#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char mask = 128; // 2^7 = 128, 左端のビットを確認するためのマスク

	while (mask > 0)
	{
		if (octet & mask) // ビットが1かどうか確認
			write(1, "1", 1);
		else
			write(1, "0", 1);
		mask >>= 1; // マスクを右シフトして次のビットを確認
	}
}

int	main(void)
{
	print_bits(2);   // "00000010"
	write(1, "\n", 1);

	print_bits(255); // "11111111"
	write(1, "\n", 1);

	print_bits(0);   // "00000000"
	write(1, "\n", 1);

	return (0);
}
