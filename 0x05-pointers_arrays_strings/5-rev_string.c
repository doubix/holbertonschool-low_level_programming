#include "holberton.h"
#include <string.h>

/**
 * rev_string - revers a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
int i;

char c;
for (i = 0; i < strlen(s) / 2; i++)
{
c = s[i];
s[i] = s[strlen(s) - i - 1];
s[strlen(s) - i - 1] = c;
}
_putchar('\n');
}
