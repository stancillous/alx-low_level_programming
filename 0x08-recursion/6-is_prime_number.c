#include "main.h"

/**
 * nums - checks if number is a prime number
 * @i: number passed
 * @j: int counter
 * Return: 1 if prime,0 if not
 */

int nums(int i, int j)
{
	if (j % i == 0)
		return (0);
	else if (j > i * 2)
		return (nums(i + 2, j));
	else
		return (1);
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (nums(3, n));
}
