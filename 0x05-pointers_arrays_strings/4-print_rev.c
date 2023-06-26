#include "main.h"
#include <stdio.h>

/**
 * Description:A program to reverse strings in a string.
 *
 * Return:c Always 0.
 */
void print_rev(char *s)
{
	int lenght = 0;
	char *end = s;

	while (*end != '\0')
	{
		lenght++;
		end++;
	}
	while (lenght > 0)
	{
		_putchar(*(end - 1));
		end--;
		lenght--;
	}
	_putchar('\n');
}
