#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int largo, espacio;

	if (n > 0)
	{
		for (largo = 0; largo < n; largo++)
		{
			for (espacio = 0; espacio < largo; espacio++)
				_putchar(' ');
			_putchar('\\');

			if (largo == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
