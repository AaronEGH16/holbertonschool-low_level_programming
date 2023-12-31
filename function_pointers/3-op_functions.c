#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition of a and b
 *
 * @a: num1
 * @b: num2
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - substraction of a and b
 *
 * @a: num1
 * @b: num2
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiply a per b
 *
 * @a: num1
 * @b: num2
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - division of a between b
 *
 * @a: num1
 * @b: num2
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}

/**
 * op_mod - rest of division of a between b
 *
 * @a: num1
 * @b: num2
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
