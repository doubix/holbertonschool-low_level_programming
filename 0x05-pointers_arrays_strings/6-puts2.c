#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string followed by a new line
 * @str: string to print
 *
 * Return: void
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i]; i += 2)
_putchar(str[i]);
_putchar('\n');
}
