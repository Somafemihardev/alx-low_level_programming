#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int num;
	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
