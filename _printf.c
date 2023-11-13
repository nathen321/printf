#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * _printf - print a formated output?
 * @format : ....
 * Return : ...
 */
int _printf(const char *format, ...)
{
	fm_t forma_type[] = {
		{ "c", print_char },
		{ "s", print_string }
	};
	unsigned int sum = 0, i = 0, j = 0;
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
				while (j < 2)
				{
					if (format[i + 1] == *forma_type[j].id)
					{
						sum += forma_type[j].f(ap);
						i += 2;
					}
					j++;
				}
		}
		else if (format[i + 1] == '%')
		{
			i++;
		}
		_putchar(format[i]);
		sum++;
		i++;
	}
	va_end(ap);
	return (sum);
}

/**
 * print_char - print a formated output?
 * @ap : ....
 * Return: ......
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_string - print a formated output?
 * @ap : ....
 * Return: ....
 */
int print_string(va_list ap)
{
	unsigned int sum = 0, i = 0;
	char *str;

	str = va_arg(ap, char *);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		sum++;
	}
	return (sum);
}
