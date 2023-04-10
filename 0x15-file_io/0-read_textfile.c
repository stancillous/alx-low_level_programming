#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: file to be read
 * @letters: number of letters to read and print
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, i, j;
	char *buffer;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);

	if (fp < 0)
		return (0);
	buffer = malloc(sizeof(char *) * (letters + 1));

	if (!buffer)
	{
		close(fp);
		return (0);
	}

	i = read(fp, buffer, letters);
	if (i < 0)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	buffer[i] = '\0';

	j = write(STDOUT_FILENO, buffer, i);
	if (j < 0 || j != i)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	free(buffer);
	close(fp);

	return (i);
}
