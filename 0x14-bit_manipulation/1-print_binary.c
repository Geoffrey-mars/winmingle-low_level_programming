#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, started = 0;
	unsigned long int bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;

		if (bit)
			started = 1;

		if (started)
			_putchar(bit + '0');
	}
}
