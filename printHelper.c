#include "main.h"

/**
 * printHelper - a function that assist _printf() to
 * to select the correct function to handle formatting
 * @format: pointer to the string to be formatted
 * @typeVar: structure that points a formatting function
 * @args: va_list holding all passed arguments
 *
 * Return: The number of printed char to the standout output
 */
int printHelper(const char *format, var typeVar[], va_list args)
{
	int i, j, k, count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			j = 0;
			while (typeVar[j].c != NULL)
			{
				if (format[i + 1] == typeVar[j].c[0])
				{
					k = typeVar[j].f(args);
					if (k == -1)
						return (-1);
					count += k;
					break;
				}
				j++;
			}
			if (typeVar[j].c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					putchar(format[i]);
					putchar(format[i + 1]);
					count += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
		putchar(format[i]);
			count++;
		}
	}

	return (count);
}
