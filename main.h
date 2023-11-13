#ifndef MAIN_H
#define MAIN_H

typedef struct foramat_type
{
	char *id;
	void (*f)(va_list args, char *sep);
} fm_t;
#endif
