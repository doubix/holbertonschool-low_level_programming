#include "holberton.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string to print
 *
 * Return: void
 */


void puts_half(char *str)
{
int i;

for (i = 0; str[i] != '\0'; ++i)
;
i = (i % 2 == 0) ? i / 2 : (i - 1) / 2;
for (; str[i]; i++)
_putchar(str[i]);
_putchar('\n');
}
