#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return always 0
 */
int main(void)
{
    char letter;
    // Print lowercase alphabet
    for (letter = 'a'; letter <= 'z'; letter++)
    {
    	    putchar(letter);
    }
    // Print uppercase alphabet
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }
    putchar('\n');
    return (0)
}
