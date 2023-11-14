#ifndef MAIN_H
#define MAIN_H
/**
  * struct foramat_type - Struct specifiers
  * @id: The conversion specifier
  * @f: The function pointer
  */
typedef struct foramat_type
{
	char *id;
	int (*f)(va_list args);
} fm_t;

int cheker(char sep, va_list ap);
int existe(char sep);
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list ap);
int print_char(va_list ap);
int unknown(char sep);
#endif
