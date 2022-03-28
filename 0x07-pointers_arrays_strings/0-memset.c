#include "main.h"
/**
 *_memset - fills the first n bytes pointed to by s with the constant byte b.
 *@s: string that points to data type char.
 *@b: Is a constant byte b.
 *@n: n bytes to be filled with b.
 *Return: the pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
