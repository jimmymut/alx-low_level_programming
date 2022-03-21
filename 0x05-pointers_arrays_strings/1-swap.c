#include "main.h"
/**
 *swap_int - swaps the values of two integers.
 *@a: The first number.
 *@b: The second number.
 *return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
