#include "main.h"
#include <stdio.h>
/**
 * Descriptin:To check if aletter is an uppercase.
 * @c the letter to check
 * Returns 1 if c is uppercase 0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
