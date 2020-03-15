#include "holberton.h"
/**
 *
 *
 *
 */

int _print_char(va_list ap)
{
    print_char(va_arg(ap, int));
	return (1);
}

/**
 *
 *
 */

int print_string(va_list ap)
{
	int x;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	for (x = 0; str[x] != '\0'; x++)
		print_char(str[x]);
	return (x);
}

/**
 *
 *
 */

int print_percent(__attribute__((unused))va_list ap)
{
	print_char('%');
	return (1);
}
