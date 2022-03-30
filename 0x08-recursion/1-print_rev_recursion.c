#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_print_rev_recursion - reverses the string.
 *@s: The string
 *Return: nothing
 */
void _print_rev_recursion(char *s)
{
int i;
	for (i = strlen(s); i > 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
