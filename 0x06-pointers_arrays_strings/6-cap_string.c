#incude "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string passed
 * Return: void
 */

char *cap_string(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
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
		else if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		else
			str[j] = str[j];
	}
	return (str);
}
