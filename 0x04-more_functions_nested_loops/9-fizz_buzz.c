#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * For multiples of three print Fizz instead of the number
 * For the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Each number or word should be separated by a space
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
			printf("FizzBuzz");

		else if ((a % 3) == 0)
			printf("Fizz");

		else if ((a % 5) == 0)
			printf("Buzz");

		else
			printf("%d", a);

		if (a == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
