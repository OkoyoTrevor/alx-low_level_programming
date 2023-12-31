#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * The function should print the second half of the string
 * For odd numbers the function should print the last n characters
 * @str: string
 * Return: length
 */

void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
