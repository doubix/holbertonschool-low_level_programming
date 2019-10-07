#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;
for (i = 0; haystack[i]; i++)
{
if (haystack[i] == needle[0])
{
while (needle[j] && needle[j] && haystack[i + j] == needle[j])
j++;
if (!needle[j])
return (haystack + i);
}
}
return (0);
}
