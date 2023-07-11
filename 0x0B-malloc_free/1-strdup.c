#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *_strdup - duplicate to new memory spacde location.
  *@str:char
  *Return: 0
  */
char *_strdup(char *str)
{
	int i,r = 0;
	char *aaa;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		aaa[r] = str[r];
	}
	return (aaa);
}
