#include "holberton.h"
/**
 * print_last_digit - entry point
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
_putchar(c % 10 + '0');
return (c % 10);
}
