#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: entered value
 * @src: entered value
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int k;
	int z;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[k] = src[z];
		z++;
		k++;
	}

	dest[k] = '\0';
	return (dest);
}
