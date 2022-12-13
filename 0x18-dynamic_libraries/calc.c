#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int sub(int a, int b);
int divi(int a, int b);
int mod(int a, int b);
int mul(int a, int b);

int add(a, b)
{
	return (a+b);
}

int sub(a, b)
{
	return (a - b);
}

int mul(a, b)
{
	return (a * b);
}

int divi(a, b)
{
	if (b < 0 || b > 0)
		return (a / b);
}

int mod(a, b)
{
	if (b > 0 || b < 0)
		return (a % b);
}
