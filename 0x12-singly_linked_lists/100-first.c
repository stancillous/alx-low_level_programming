#include <stdio.h>

void my_init(void) __attribute__((constructor));

/**
 * my_init - print before the main function
 * Return: void
 */

oid my_init(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
