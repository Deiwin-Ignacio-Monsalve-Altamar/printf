#include "holberton.h"
/**
 * p_rev - Prints character
 * @valist: s
 * Return: return the amount of characters
 */
int p_rev(va_list valist)
{
	int i, j count = 0;
	char *s;

	s = va_arg(alist, char *);

	j = 0;
	j = 0;

	if (s == '\0')
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_print_char(s[j]);
		count++;
	}
	return (count);
}

/**
 * p_rot13 - Prints character
 * @valist: arguments
 * Return: return the amount of characters
 */
int p_rot13(va_list valist)
{
	int i, aux;
	char *s;

	s = va_arg(valist, char *);

	i = 0;
	aux = 0;

	for (i = 0; s[i] != '\0'; i++;
		{
			if ((s[i] >= 'A' && s[i] >= 'a' && s[i] <= 'z'))
			{
				aux = 13 + s[i];
				if ((aux > 'Z' && s[i] <= 'Z')
					{
						aux = aux % (90 + (32 * (97 / s[i])));
						aux = aux + (65 + (32 * (97 / s[i]))) - 1;
					}
					_print_char(aux);
			}
				else
				{
					_print_char
						}
			}
		}			return (-1)
