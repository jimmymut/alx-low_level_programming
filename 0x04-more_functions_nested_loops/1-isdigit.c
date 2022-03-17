#include "main.h"
/**
 * main - to check if the character is a digit.
 *
 * return: 1 if is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >=48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
