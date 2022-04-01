#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the multiplicaton of two numbers.
 *@argc: Argument counter.
 *@argv: An array of the arguments which are the numbers.
 *Return: returns 1.
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
