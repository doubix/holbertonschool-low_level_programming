#include "holberton.h"
/**
 * main - entry point
 * dsiplaying a msg
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    } else if ( n < 0)    
    {
        _putchar('-');
        return (-1);
    } else
    {
        _putchar('0');
        return (0);
    }
}