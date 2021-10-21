#include "main.h"

/**
 * print_number - prints an integer
 * @n: holds the number to print
 */

void print_number(int n)
{
	if (n <= 9)
	{
		_putchar((n % 10) + 48);
	}
	else if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar((n / 100) + 48);
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else
	{
		_putchar((n /1000) + 48);
		_putchar((n / 100) + 48);
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
}
