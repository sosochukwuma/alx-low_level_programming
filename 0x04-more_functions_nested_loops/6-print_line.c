#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{
	int lar;

	if (n > 0)
	{
		for (lar = 0; lar < n; lar++)
			_putchar('_');
	}
	_putchar('\n');
}
