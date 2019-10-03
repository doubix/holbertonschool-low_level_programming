#include "holberton.h"

/**
 * print_number -  prints an integer
 * @n: intiger
 * Return: void
 *
 */
void print_number(int n)
{
int m = 1, num = n, cnt = 0;

if (num < 0)
num = -n;

while (num > 9)
{
num /= 10;
m *= 10;
cnt++;
}
if (n < 0)
_putchar('-');
while (m > 0)
{
num = n / m;
m /= 10;
if (n < 0)
_putchar(num % 10 * -1 + '0');
else
_putchar(num % 10 + '0');
}
}
