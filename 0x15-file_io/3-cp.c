#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX_BUFF 1024

/**
 * main - copies content of one file to another file
 * @argc: argument count
 * @argv: vector with the arguments
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int from, to;
	char buffer[MAX_BUFF];
	ssize_t i;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file from file_to\n", argv[0]);
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((i = read(from, buffer, MAX_BUFF)) > 0)
	{
		if (write(to, buffer, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}

	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	if (close(to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: CAn't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
