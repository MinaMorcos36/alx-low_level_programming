#include "main.h"

/**
 * Description: _strcpy - copies a string pointed to by source
 * @d: destination
 * @s: source
 * Return: string
 */

char *_strcpy(char *d, char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		*(d + l) = *(s + l);
		l++;
	}

	*(d + l) = '\0';
	return (d);
}
