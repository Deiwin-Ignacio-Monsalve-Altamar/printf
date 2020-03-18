#include "holberton.h"
/**
 * p_rev - Prints character
 * @valist: s
 * Return: return the amount of characters
 */
int p_rev(va_list ap)
{
	int i, j, count = 0;
	char *s;

	s = va_arg(ap, char *);

	i = 0;
	j = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		print_char(s[j]);
		count++;
	}
	return (count);
}

/**
 * p_rot13 - Prints character
 * @ap: arguments
 * Return: return the amount of characters
 */
int rot13(va_list ap)
{
	int i, aux;
	char *s;

	s = va_arg(ap, char *);

	i = 0;
	aux = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] >= 'Z') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			aux = 13 + s[i];
			if ((aux > 'Z' && s[i] <= 'Z') || aux > 'z')
			{
				aux = aux % (90 + (32 * (97 / s[i])));
				aux = aux + (65 + (32 * (97 / s[i]))) - 1;
			}
			print_char(aux);
		}
		else
			print_char(s[i]);
	}
	return (i);
}
