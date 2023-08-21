#include "main.h"

/**
 * Description: _puts - prints a string
 * @str: string will be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
