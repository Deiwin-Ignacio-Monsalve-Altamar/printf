#include "holberton.h"
/**
 *
 *
 *
 */

int print_char(va_list list)
{
    print_char(va _arg(list, int));
	return (1);
}

/**
 *
 *
 */

int print_string(va_list list)
{
	int x;
	char *str;

	str = va_arg(list, char *);
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

int print_percent(__attribute__((unused))va_list list)
{
	print_char('%');
	return (1);
}
