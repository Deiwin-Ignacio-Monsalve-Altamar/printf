#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct op- defines a structure
 * @op: the operator
 * @f: the fuction associated
 */
typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
#endif
