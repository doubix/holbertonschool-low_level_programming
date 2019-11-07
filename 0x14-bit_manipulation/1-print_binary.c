#include "holberton.h"

/**
 * _pow - calculates a^b
 * @a: base of the exponent
 * @b: power of the exponent
 *
 * Return: value of  a^b
 */
unsigned long int _pow(unsigned int a, unsigned int b)
{
	unsigned long int result;
	unsigned int i;

	result = 1;
	for (i = 1; i <= b; i++)
		result *= a;
	return (result);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int bn;
char flag = 0;

bn = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (bn != 0)
{
if ((n & bn) == bn)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || bn == 1)
_putchar('0');
bn >>= 1;
}
}
