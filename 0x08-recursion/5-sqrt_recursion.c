#include "main.h"

/**
* _sqrt_recursion - Function returns the natural square root of a number.
* @n: number whose squareroot we seek
* Return: natural square root of the number, -1 if does not exist
*/
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sq(n, root));
}

/**
* sq - function finds the natural square root of a number
* @n: number whose square root we find
* @root: Possible root of the number
* Return: returns natural square root of the number if it exist
* or -1 otherwise
*/
int sq(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (sq(num, root + 1));
}
