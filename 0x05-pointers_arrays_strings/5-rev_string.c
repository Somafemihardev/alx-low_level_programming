#include "main.h"
#include <stdio.h>

/**
 * Description:A program to revrt a whple string.
 *
 * Return:Always 0.
 */
void rev_string(char *s)
{
	int lenght = 0;
	char *end = s;
	char *start = s;

	while (*end != '\0')
	{
		lenght++;
		end++;
	}
	start = s;
	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
