<!-- Headings -->

# _printf

## Synopsis
This is the printf function that formats and prints data

## Description
The _printf function returns the number of characters printed, or a negative

<!-- UL -->
The available convertion specifiers are:

* %c: Prints a single character.
* %s: Prints a string of characters.
* %d: Prints integers.
* %i: Prints integers.
* %b: Prints the binary representation of an unsigned decimal.
* %u: Prints unsigned integers
* %x: Prints the hexadecial representation of an unsigned decimal in lowercase
letters
* %X:Prints the hexadecial representation of an unsigned decimal in uppercase
letters
* %r: Prints a reversed string
* %R: Prints the Rot13 interpretation of a string

<!-- Headings -->

## Usage

* include the "holberton.h" header file on the functions using the _printf
* Compile your code with:

```
  gcc -Wall -Werror -Wextra -pedantic *.c

```

<!-- Headings -->
## Example

```
#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main()
{
	int testInteger = 5;
    	printf("Number = %d", testInteger);   /*expected: Number = 5*/
    	return (0);
}
```
