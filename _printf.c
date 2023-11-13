#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - print a formated output?
 * @format : ....
 * Return : ...
 */
void _printf(const char *format, ...)
{
	fm_t forma_type[] = {
		{ "c", print_char },
		{ "i", print_integer },
		{ "f", print_float },
		{ "s", print_string }
	};
}
