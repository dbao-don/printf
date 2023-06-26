#include "main.h"

/**
 * writeInt - a function that handles decimals
 * @args: a list containing arguments
 *
 * Return: Numbers printed to STDOUT
 */
int writeInt(va_list args)
{
	long int value = va_arg(args, int);
	long int temp;
	int numDigits = 0, count = 0, i = 0;
	int digit, j;
	char digits[20];

	if (value < 0)
	{
		putchar('-');
		value = -value;
		count++;
	}
	temp = value;
	while (temp != 0)
	{
		temp /= 10;
		numDigits++;
	}
	if (value == 0)
	{
		putchar('0');
		count++;
	}
	else
	{
		while (value != 0)
		{
			digit = value % 10;
			digits[i] = '0' + digit;
			value /= 10;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			putchar(digits[j]);
			count++;
		}
	}

	return (count);
}
