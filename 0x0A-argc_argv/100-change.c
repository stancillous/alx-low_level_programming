#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: command line args
 * @argv: array with the args
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, coins = 0, num;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		num = atoi(argv[1]);

		if (num >= 0)
		{
			for (i = 0; i < 5; i++)
			{
				while (num / cents[i])
				{
					coins++;
					num -= cents[i];
				}
				if (num == 0)
					break;
			}
			printf("%d\n", coins);
		}
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
