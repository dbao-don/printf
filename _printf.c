#include "main.h"

/**
 * _printf - a function that produces output
 * according to a format.
 * @format: string to be formatted.
 *
 * Return: Total number of printed characters
 */
int _printf(const char *format, ...)
{
	/* initialize variables to be used */
	int counter = 0;
	va_list args;
	/* handles which function to be used for formatting */
	var typeVar[] = {
		{"c", writeChar},
		{"s", writeStr},
		{"%", writePerc},
		{"d", writeInt},
		{"i", writeint},
		{NULL, NULL}
	};

	/* checks if the string is empty and exists */
	if (format == NULL)
		return (-1);
	/* receives the string and arguments for formatting */
	va_start(args, format);
	counter = printHelper(format, typeVar, args);
	va_end(args);

	/* returns the amount of printed characters */
	return (counter);
}
