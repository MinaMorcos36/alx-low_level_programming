#include "main.h"

/**
 * Description: rev_string - reverses a string
 * @str: the input string
 * Return: reversed string
 */

void rev_string(char *str)
{
	char r = str[0];
	int c = 0;
	int i;

	while (str[c] != '\0')
		c++;

	for (i = 0; i < c; i++)
	{
		c--;
		r = str[i];
		str[i] = str[c];
		str[c] = r;
	}
}
