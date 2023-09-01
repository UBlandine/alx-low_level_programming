#include <stdio.h>

/**
 * main - print the number of the arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
