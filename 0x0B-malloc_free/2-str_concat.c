#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *:A program that concateeates two strings.
  *:should point to a newly allocated space in the memory.
  *Return:Null on failure.
  */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *cont;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	cont = malloc(sizeof(char) * (i + j + 1));

	if (cont == NULL)
	{
		return (NULL);
	}

	i = j = 0;
	while (s1[1] != '\0')
	{
		cont[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		cont[i] = s2[j];
		i++, j++;
	}
	cont[i] = '\0';
	return (cont);
}
