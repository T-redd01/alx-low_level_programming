#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add a and b
 * @a: int operand
 * @b: int operand
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub a and b
 * @a: int operand
 * @b: int operand
 * Return: minus of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul a and b
 * @a: int operand
 * @b: int operand
 * Return: multiply of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div a and b
 * @a: int operand
 * @b: int operand
 * Return: divivion of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - remainder a and b
 * @a: int operand
 * @b: int operand
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

