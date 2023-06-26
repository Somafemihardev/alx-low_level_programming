#include "main.h"
#include <stdio.h>

/**
 * Description: A program to return the lennght of a string.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int lenght = 0;

	/*Iterating through the string until the terminator is reached*/
	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
	
