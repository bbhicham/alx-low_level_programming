#include <stdlib.h>
#include "main.h"
/**
 * count_word - count the number of words in a string
 * @str: input
 * Return: number of words
 */
int count_words(char *str)
{
int flag, count, words;

flag = 0;
words = 0;

for (count = 0; str[count] != '\0'; count++)
{
if (str[count] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
words++;
}
}

return (words);
}
/**
 * **strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return:  an array of strings (words), or NULL if str is NULL, empty.
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
len++;
words = count_words(str);
if (words == 0)
return (NULL);

matrix = (char **)malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *)malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}

matrix[k] = NULL;

return (matrix);
}
