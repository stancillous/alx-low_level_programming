#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to add at the end of file
 * Return: 1(success) or -1(fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, strLen  = 0;

	for (strLen = 0; text_content[strLen] != '\0'; strLen++)
		;

	fp = open(filename, O_WRONLY | O_APPEND);
	if (!filename)
		return (-1);
	if (fp < 0)
		return (-1);
	if (text_content)
	{
		if (write(fp, text_content, strLen) != strLen)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
