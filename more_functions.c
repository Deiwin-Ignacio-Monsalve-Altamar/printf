#include "holberton.h"
/**
 * binary - Prints character
 * @ap: arguments
 * Return: return int of characters
 */
int binary(va_list ap)
{
	unsigned int number;
	int i, j, contador = 0;
	char *s;

	number = va_arg(ap, unsigned int);
	if (number == 0)
	{
		print_char('0' + 0);
	}
	else
	{
		s = malloc(sizeof(int) * number + 1);
		if (s == NULL)
			return (0);
		for (i = 0; number > 0; i++)
		{
			s[i] = number % 2;
			number = number / 2;
			contador++;
		}
		for (j = i - 1; j >= 0; j--)
			print_char('0' + s[j]);
		free(s);
	}
	return (contador + 1);
}
