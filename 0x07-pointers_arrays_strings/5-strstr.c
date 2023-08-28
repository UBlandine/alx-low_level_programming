#include "main.h"
/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: always 0 on success
 */
char *_strstr(char *haystack, char *needle)
{
	int k;

	while (*haystack)
	{
		for (k = 0; needle[k]; k++)
		{
			if (*haystack == needle[k])
				return (haystack);
		}
			haystack++;
		}
		return ('\0');
	}
