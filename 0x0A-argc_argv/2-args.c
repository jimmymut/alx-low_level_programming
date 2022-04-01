#include "main.h"
#include <stdio.h>
/**
 *main - prints all arguments passed to the program.
 *@argc: Argument counter.
 *@argv: An array of the arguments.
 *Return: return success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
