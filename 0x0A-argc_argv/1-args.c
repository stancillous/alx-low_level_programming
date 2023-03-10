#include <stdio.h>

/**
 * main - print arg count
 * @argc: argument count
 * @argv: array with the args
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
