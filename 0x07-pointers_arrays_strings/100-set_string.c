#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer of char
 * @to: pointer pointed to from s
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
