#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * words_count - count number of words in a string.
 * @str: given string.
 * Return: number of words.
 */
int words_count(char *str)
{
unsigned int i, cout = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
if (str[i + 1] != ' ' && str[i + 1] != '\0')
cout++;
}
else if (i == 0)
cout++;
}
cout++;
return (cout);
}

/**
 * strtow - splits a string into words.
 * @str: input string.
 * Return: Pointer to array.
 */
char **strtow(char *str)
{
char **words_array;
unsigned int nbr_of_words = 0, count_char = 0, i, word_idx = 0;
unsigned int free_idx, j = 0, e = 0;

if (str == NULL || *str == '\0')
return (NULL);

nbr_of_words = words_count(str);
words_array = (char **)malloc((nbr_of_words + 1) * sizeof(char *));
if (words_array == NULL || nbr_of_words == 0)
{
free(words_array);
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
e = 1;
for (count_char = 0; str[i] != ' ' && str[i] != '\0'; i++)
count_char++;
words_array[word_idx] = (char *)malloc((count_char + 1) * sizeof(char));
if (words_array[word_idx] == NULL)
{
for (free_idx = 0; free_idx <= word_idx; free_idx++)
free(words_array[free_idx]);
free(words_array);
return (NULL);
}
for (j = 0; j < count_char; j++)
words_array[word_idx][j] = str[(i - count_char) +j];
words_array[word_idx][j] = '\0';
word_idx++;
}
}
if (e != 1)
return (NULL);
words_array[word_idx] = NULL;
return (words_array);
}
