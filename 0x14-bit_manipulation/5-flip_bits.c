#include "holberton.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check;
	unsigned int k = 0, i;

check = 1;
for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
{
if (check == ((n ^ m) & check))
k++;
check <<= 1;
}
return (k);
}
