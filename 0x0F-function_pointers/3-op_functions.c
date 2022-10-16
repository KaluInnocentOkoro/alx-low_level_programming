#include "3-calc.h"

/**
* op_add - function performs addition operation
* @a: first integer for addition
* @b: 2nd integer for addition
* Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - function performs subtraction operation
* @a: 1st number
* @b: 2nd number
* Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - function performs multiplication operation
* @a: 1st number
* @b: 2nd number
* Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - function performs division operation
* @a: dividend
* @b: divisor
* Return: result of a/b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - function performs a modulus operation
* @a: dividend
* @b: divisor
* Return: The remainder when a is divided byb
*/
int op_mod(int a, int b)
{
	return (a % b);
}
