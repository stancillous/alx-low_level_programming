#incude "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string passed
 * Return: void
 */

char *cap_string(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (j = 0; j < i; j++)
	{
		/*check for symbols*/
		if ((str[j - 1] == '.' || str[j - 1] == ' ' || str[j - 1] == ',' ||
					str[j - 1] == '\t' || str[j - 1] == '\n' ||
					str[j - 1] == '?' || str[j - 1] == '!' ||
					str[j - 1] == '"' || str[j - 1] == ';' ||
					str[j - 1] == '(' || str[j - 1] == ')' ||
					str[j - 1] == '{' || str[j - 1] == '}') &&
				(str[j] >= 97 && str[j] <= 122))
		{
			str[j] -= 32;
		}
	}
	return (str);
}
