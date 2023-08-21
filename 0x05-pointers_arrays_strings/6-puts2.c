#include "main.h"

/**
 * Description: puts2 - prints charc then leaves one and so on
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putschar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
