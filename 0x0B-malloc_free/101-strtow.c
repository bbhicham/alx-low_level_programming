#include <stdlib.h>
#include "main.h"

/**
 * **strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: Pointer to an array of strings (words), or NULL if str is NULL, empty, or memory allocation fails.
 */
char **strtow(char *str)
{
    char **words, *word;
    int i, k = 0, len = 0, num_words = 0, start, end;

    
    if (str == NULL || *str == '\0')
        return NULL;

   
    while (*(str + len))
        len++;

   
    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (num_words > 0)
            {
                end = i;
                word = (char *)malloc(sizeof(char) * (k + 1));
                if (word == NULL)
                {
                   
                    for (int j = 0; j < num_words; j++)
                        free(words[j]);
                    free(words);
                    return NULL;
                }
                while (start < end)
                    *word++ = str[start++];
                *word = '\0';
                words[num_words - 1] = word - k;
                k = 0;
            }
        }
        else if (k++ == 0)
            start = i;
    }

    words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    words[num_words] = NULL;

    return words;
}