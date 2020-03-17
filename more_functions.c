#include "holberton.h"
/**
 * binary - Prints character
 * @ap: arguments
 * Return: return int of characters
 */
unsigned int _binary(unsigned int number)
{
	int i, j, x = 0;
	unsigned int contador;
	char *s;

	s = malloc(sizeof(int) * number + 1);
	if (s == NULL)
		return (0);
	for (i = 0; number > 0; i++)
	{
		s[i] = number % 2;
		number = number / 2;
		contador = s[i];
	}
	for (j = i - 1; j >= 0; j--)
		print_char('0' + s[j]);
	x++;
	free(s);
	return (contador + x);
}
/**
 * binary - Prints character
 * @ap: arguments
 * Return: return int of characters
 */
int binary(va_list ap)
{
	int number;
	number = _binary(va_arg(ap, unsigned int));

	return (number);
}
