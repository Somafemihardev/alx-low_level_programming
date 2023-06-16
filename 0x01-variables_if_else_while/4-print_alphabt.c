#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: always zero
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		 if (letter != 'q' && letter != 'e')
		 {
			  putchar(letter);
		 }
	}
	putchar('\n');
	return (0);
}
