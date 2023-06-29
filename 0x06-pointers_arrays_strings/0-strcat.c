#include "main.h"
#include <stdio.h>
/**
 * Description:A program to concateneate strings.
 *
 * Return:A poiner to the dest.
 */
char *_strcat(char *dest, char *src)
{
	int i,j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

