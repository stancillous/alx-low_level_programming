#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to seach from
 * @needle: substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int strLen, subLen, i;

	for (strLen = 0; haystack[strLen] != '\0'; strLen++)
		;
	for (subLen = 0; needle[subLen] != '\0'; subLen++)
		;
	/*loop through the string haystack*/
	for (i = 0; strLen - subLen; i++)
	{
		int j = 0;

		while (j < subLen && haystack[i + j] == needle[j])
			j++;
		if (j == subLen)
			return (haystack + i);
	}
	return ('\0');
}
