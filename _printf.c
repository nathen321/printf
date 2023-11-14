#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * _printf - print a formated output?
 * @format : ....
 * Return: ........
 */
int _printf(const char *format, ...)
{
	unsigned int sum = 0, i = 0;
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		if (format[i] == '\0')
			return (-1);
		if (format[i] == '%')
		{
			i++;
			cheker(format[i + 1], ap);
		}
		_putchar(format[i]);
		sum++;
		i++;
	}
	va_end(ap);
	return (sum);
}

/**
 * cheker - print a formated output?
 * @sep : ....
 * @ap : ....
 * Return: ........
 */
int cheker(char sep, va_list ap)
{
	fm_t forma_type[] = {
		{ "c", print_char },
		{ "s", print_string }
	};
	unsigned int sum = 0, j = 0;

	while (j < 2)
	{
		if (sep == *forma_type[j].id)
		{
			sum += forma_type[j].f(ap);
		}
		if (sep == '%')
		{
			_putchar('%');
			sum++;
		}
		j++;
	}
	return (sum);
}
