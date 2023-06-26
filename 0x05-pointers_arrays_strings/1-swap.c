#include "main.h"
#include <stdio.h>

/**
 * Description: Afunction that swaps the vlues of integers.
 *
 * Return:ALways 0
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
