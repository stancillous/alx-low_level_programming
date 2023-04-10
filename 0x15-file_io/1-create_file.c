#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 (success) or -1(fail)
 */

int create_file(const char *filename, char *text_content)
{
	int fp, i = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);

	while (text_content[i] != '\0')
		i++;
	if (write(fp, text_content, i) != i)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
