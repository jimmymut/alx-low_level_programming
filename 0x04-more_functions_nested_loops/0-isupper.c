#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - check for uppercase
 *
 * return: 1 if is an uppercase character, 0 in other case.
 *
 */
void main(void)
{
	int a, c;

	a = 'c';
	if (isupper(a))
	{
		return (1);
	}
	else
		return (0);
}
