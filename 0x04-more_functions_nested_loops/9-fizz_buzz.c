#include <stdio.h>

/**
 * main - prints the numbers from 1-100
 *        Such that, for multiples of three, Fizz is printed instead of the number(s)
 *        for multiples of five, Buzz is printed,
 *        and for multiples of both three and five, FizzBuzz is printed
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i += 1)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
