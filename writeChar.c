#include "main.h"

/**
 * writeChar - a funtion that prints a char
 * to the STDOUT
 * @args: a list containging arguments
 * Return: 1
 */
int writeChar(va_list args)
{
	putchar(va_arg(args, int));
	return (1);
}
