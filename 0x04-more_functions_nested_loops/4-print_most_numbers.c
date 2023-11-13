#include "main.h"

/**
 * print_most_numbers - Entry point
 * Return: 0
 *
 */

void print_most_numbers(void)
{
	int a;

	a = '0';
	while (a < '10')
	{
		if ((a != '2' && a != '4') && a < '10')
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
