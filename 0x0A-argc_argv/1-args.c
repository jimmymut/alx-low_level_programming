#include "main.h"
#include <stdio.h>
/**
 *main - prints the number of arguments passed to the program.
 *@argc: An argument that counts the arguments.
 *@argv: An array of the size argc.
 *Return: 0, success.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
