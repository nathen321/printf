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
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			while (format[i] == ' ')
				i++;
			if (format[i] == '%')
				sum += _putchar(format[i]);
			if (existe(format[i]) == 1)
			{
				sum += cheker(format[i], ap);
			} 
			else
			{
				sum += unknown(format[i]);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			sum++;
			i++;
		}
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
		{ "s", print_string },
		{NULL, NULL}
	};
	unsigned int sum = 0, j = 0;

	while (j < 2)
	{
		if (sep == *forma_type[j].id)
		{
			sum += forma_type[j].f(ap);
		}
		j++;
	}
	return (sum);
}
/**
 * existe - print a formated output?
 * @sep : ....
 * Return: ........
 */
int existe(char sep)
{
	char str[] = {'c', 's', 'd', 'i', 'b', '%', 'p', 'X', 'x', 'u', '0'};
	unsigned int i = 0;

	while (i < 10)
	{
		if (sep == str[i])
			return (1);
		i++;
	}
	return (0);
}
