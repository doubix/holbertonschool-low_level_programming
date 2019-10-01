#include "holberton.h"

/**
 * print_array - prints n elements of array of ints
 * @a: pointer to array
 * @n: numbers of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n - 1; i++)
printf("%d, ", a[i]);
printf("%d\n", a[i - 1]);
}
