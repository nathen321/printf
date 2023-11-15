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

/**
  * print_a_integer - Prints a integer
  * @args: A list of variadic arguments
  *
  * Return: The length of the string
  */
int print_a_integer(va_list args)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;
	if (m < 0)
	{
		_putchar('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	_recursion_integer(m);
	return (count);
}

/**
  * _recursion_integer - Prints a integer
  * @a: integer to print
  *
  * Return: Nothing
  */
void _recursion_integer(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		_recursion_integer(t / 10);
	_putchar(t % 10 + '0');
}
