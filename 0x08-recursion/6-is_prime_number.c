#include "main.h"

/**
 * prime_num - counts down n to find if prime
 * @n: num to find prime
 * @count: hold n value and decrement
 * Return: 1 if prime 0 if not
 */
int prime_num(int n, int count)
{
	if (count == 1)
	{
		return (1);
	}
	if (n % count == 0 && count > 0)
	{
		return (0);
	}
	return (prime_num(n, count - 1));
}

/**
 * is_prime_number - call actual prime to find prime
 * @n: number to check if prime
 * Return: 0 if 1 or less else call prime_num
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_num(n, n - 1));
}
