#include "main.h"

/**
 * binary_to_uint - prints the binary representation of a number.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int un;

	un = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		un <<= 1;
		if (b[i] == '1')
			un += 1;
	}
	return (un);
}
