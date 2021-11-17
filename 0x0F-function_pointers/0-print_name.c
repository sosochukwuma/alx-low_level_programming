#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: char variable
 * @f: void variable
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	f(name);
}
