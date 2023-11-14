#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

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
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
			sum++;
		}
		return (sum);
	}
	else
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
}

/**
 * unknown - print a formated output?
 * @sep : ....
 * Return: ....
 */

int unknown(char sep)
{
	_putchar('%');
	_putchar(sep);
	return (2);
}
