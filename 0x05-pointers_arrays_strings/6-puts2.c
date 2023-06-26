#include "main.h"
#include <stdio.h>

/**
 * Description:A program to print every other character of a string.
 *
 * Return:Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
