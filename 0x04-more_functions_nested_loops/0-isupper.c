#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - check for uppercase
 *
 * return: 1 if is an uppercase character, 0 in other case.
 *
 */
int main(void)
{
	int a;

	a = 'c';
	if (isupper(a))
	{
		return (1);
	}
	else
		return (0);
}
