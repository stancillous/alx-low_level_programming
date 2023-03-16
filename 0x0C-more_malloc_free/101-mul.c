#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the mul of args passed
 * @argc: argument count
 * @argv: array with the args
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, j, mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
