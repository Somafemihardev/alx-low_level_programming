#include "main.h"
#include <stdio.h>

/**
 * Descrition:A program that prints a string followed by new line.
 *
 * Return: always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
