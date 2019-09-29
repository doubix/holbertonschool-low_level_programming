#include "holberton.h"
#include <stdio.h>
/**
 * print_number - prints int
 * @n: number
 * Return: 0;
 */
void print_number(int n)
{
int size = 100000000, r;

if (n < 0)
{
n = -n;
_putchar('-');
}
r = n % 10;
n=n/10;
if (r < 0)
r = -r;

if (n < 10)
size = 1;
else
{
while (n / size == 0)
size /= 10;
}
while (size > 1)
{
_putchar(n / size + '0');
n %= size;
size /= 10;
}
_putchar('0' + r);
}
