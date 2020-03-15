#include "holberton.h"
/**
 *_printf - print char
 *@format: const char *
 *Return: int print
 */
int _printf(const char *format, ...)
{
	op_t ops[] = {
		{"c", print_char},
		{"s", pritn_string},
		{"%", print_mod},
		{NULL, NULL}};
	int i, j, r, print = 0;

	va_list ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	_parseo = (format, ops, ap);
	va_end(ap);

	return (print);

}
