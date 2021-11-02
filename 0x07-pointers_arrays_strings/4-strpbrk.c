#include "main.h"

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: string to be searched
 * @accept: bytes to be searched for
 * Return: pointed to byte in s that matches byte in accept or NULL if no such
 * byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
