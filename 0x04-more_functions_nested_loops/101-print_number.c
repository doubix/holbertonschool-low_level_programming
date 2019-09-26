#include "holberton.h"
/**
 * print_number - prints int
 * @n: number
 * Return: 0;
 */
void print_number(int n)
{
int size = 1000000000;

if (n < 0)
{
n = -n;
_putchar('-');
}

if (n < 10)
size = 1;
else
{
while (n / size == 0)
size /= 10;
}


while (size)
{
_putchar(n / size + '0');
n %= size;
size /= 10;
}
}
