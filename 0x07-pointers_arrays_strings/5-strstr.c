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

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		k = 0;
		if (haystack[k] == needle[k])
		{
			do {
			if (needle[k + 1] == '\0')
				return (haystack);
			k++;
		}
			while (haystack[k] == needle[k]);
		}
		haystack++;
	}
		return ('\0');
	}
