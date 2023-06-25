#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

int writeInt(va_list args);
int writeChar(va_list args);
int writeStr(va_list args);
int writePerc(va_list args);
int _printf(const char *format, ...);
typedef struct var var;
/**
 * struct var - a structure holding the correct
 * formatting functions from format specifier
 * @c: character that directs the format specifier
 * @f: function that formats a arguments passed
 */
struct var
{
	char *c;
	int (*f)(va_list args);
};
int printHelper(const char *format, var typeVar[], va_list args);

#endif
