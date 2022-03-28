#include "main.h"
/**
 *_strchr - locate character in string.
 *@s: a string where the character is being located.
 *@c: the occurrance character c.
 *Return: Returns a pointer.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	if (*(s + i) == c)
	return (s + i);
	if (*(s + i) == c)
	return (s + i);
	return ('\0');
}
