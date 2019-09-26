#include "holberton.h"
#include <stdio.h>
/**
 * print_number - prints the largest prime factor of number 612852475143
 *
 * Return: 0;
 */
void print_number(int n)
{
int size =1;

if (n<0)
n = -n;

while (size < n)
size *= 10;

if (size > 10) 
size /= 10;

while (size)
{
_putchar(n / size + '0');
n%=size;
size/=10;
}
}
