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
int _parseo(const char *format, op_t ops[], va_list ap);
#endif
