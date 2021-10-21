#include "main.h"

/**
 * print_square - prints a square then a new line
 * @size: The size of the square
 */
void print_square(int size)
{
	int alto, ancho;

	if (size > 0)
	{
		for (alto = 0; alto < size; alto++)
		{
			for (ancho = 0; ancho < size; ancho++)
				_putchar('#');

			if (alto == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
