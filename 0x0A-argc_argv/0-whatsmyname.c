#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	print("%s\n", *argv);
	return (0);
}
