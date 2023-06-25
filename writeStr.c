#include "main.h"

/**
 * writeStr - a function that prints a string
 * to the STDOUT
 * @args: a list of arguments
 *
 * Return: Number of printed char
 */
int writeStr(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[count] != '\0')
	{
		putchar(str[count]);
		count++;
	}

	return (count);
}
