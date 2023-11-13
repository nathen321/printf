#ifndef MAIN_H
#define MAIN_H
typedef struct foramat_type
{
	char *id;
	int (*f)(va_list args);
} fm_t;

void _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list ap);
int print_char(va_list ap);
#endif
