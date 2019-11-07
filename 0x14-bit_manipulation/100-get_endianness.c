#include "holberton.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int x;
char *s;

x = 1;
s = (char *)&x;
return (*s);
}
