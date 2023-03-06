#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int col, rows;

	for (rows = 0; rows < 8; rows++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[rows][col]);
		}
		_putchar('\n');
	}
}
