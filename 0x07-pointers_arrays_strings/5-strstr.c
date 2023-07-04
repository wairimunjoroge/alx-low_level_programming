#include "main.h"

/**
 * _strstr - Locates the first occurrence of the substring
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to be located
 *
 * Return: Pointer or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack, *curr_haystack, *curr_needle;

	while (*haystack != '\0')
	{
		start_haystack = haystack;
		curr_haystack = haystack;
		curr_needle = needle;

		while (*curr_needle != '\0' && *curr_haystack == *curr_needle)
		{
			curr_haystack++;
			curr_needle++;
		}

		if (*curr_needle == '\0')
			return (start_haystack);

		haystack++;
	}

	return ('\0');
}
