#include "./main.h"

/**
 * sqrt_root - gets sqrt root
 *
 * @root: int to gets a root
 *
 * @n: number from get to root
 *
 * Return: -1 if not natural or the num of root
 */

int sqrt_root(int root, int n)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}

	return (sqrt_root(root + 1, n));
}

/**
 * _sqrt_recursion - main of recursive sqrt
 *
 * @n: number from gets to root
 *
 * Return: the result of recursive sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_root(0, n));
	}
}
