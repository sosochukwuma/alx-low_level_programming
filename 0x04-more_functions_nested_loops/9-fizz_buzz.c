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
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		if (i < 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
