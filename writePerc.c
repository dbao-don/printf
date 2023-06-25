#include "main.h"

/**
 * writePerc - a function that prints
 * % to STDOUT
 * @args: a list containing arguments
 *
 * Return: 1
 */
int writePerc(__attribute__((unused)) va_list args)
{
	putchar('%');
	return (1);
}
