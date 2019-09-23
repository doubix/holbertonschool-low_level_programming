#include "holberton.h"
/**
 * main - entry point
 * dsiplaying a msg
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
    _putchar(c % 10 + '0');
    return (c % 10);
}