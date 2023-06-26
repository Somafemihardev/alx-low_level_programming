#include "main.h"
#include <stdio.h>

/**
 * Description:A progrqam to print half of the value of s string.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int lenght = 0;
	char *ptr = str;
	int n = lenght / 2;


	/*find the lenght of the string*/
	while (*ptr != '\0')
	{
		lenght++;
		ptr++;
	}
	if (lenght % 2 == 1)
	{
		n = (lenght - 1) / 2;
	}
	/*Print the second half of the string.*/
	ptr = str + n;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}
