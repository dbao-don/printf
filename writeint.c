#include "main.h"

/**
 * writeInt - a function that handles decimals
 * @args: a list containing arguments
 *
 * Return: Numbers printed to STDOUT
 */
	int writeInt(va_list args)
{
	int value = va_arg(args, int);
	char buffer[20];
	int count = 0;
	int sign = 0;

	if (value < 0)
	{
		sign = 1;
		value = -value;
	}

	do {
		buffer[count++] = '0' + (value % 10);
		value /= 10;
		} while (value > 0);

		if (sign)
		buffer[count++] = '-';

		while (count > 0)
		putchar(buffer[--count]);

		return (count);
}
