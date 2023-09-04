#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input
 * @s2: input
 * Return: contact of s1 & s2
 */

char *str_concat(char *s1, char *s2)
{
	char *contact;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	contact = malloc(sizeof(char) * (i + ci + 1));

	if (contact == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		contact[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		contact[i] = s2[ci];
		i++, ci++;
	}
	contact[i] = '\0';
	return (contact);
}
