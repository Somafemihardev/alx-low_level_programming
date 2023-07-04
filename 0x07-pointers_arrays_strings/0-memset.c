#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s:starting address of memeoryto be filled with
 * @b:the desired value.
 * Return:changed array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
