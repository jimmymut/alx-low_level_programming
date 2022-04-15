#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers, followed by a new line
 *@separator: a string to be printed between numbers
 *@n: is the number of integers passed to the function
 *
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, const unsigned int));
		}
	}
	else
	{
		for (i = 0; i != n - 1; i++)
		{
			printf("%d%s", va_arg(ap, const unsigned int), separator);
		}
		printf("%d", va_arg(ap, const unsigned int));
	}
	putchar('\n');
	va_end(ap);
}
