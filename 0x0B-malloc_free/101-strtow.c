#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: Pointer to an array of strings (words), or NULL if str is NULL or empty.
 */
char **strtow(char *str)
{
    char **words = NULL;
    char *token = NULL;
    int i, j, word_count = 0;

   
    if (str == NULL || *str == '\0')
        return NULL;

    
    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            word_count++;
    }

   
    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    
    token = strtok(str, " ");
    i = 0;
    while (token != NULL)
    {
        words[i] = strdup(token);
        if (words[i] == NULL)
        {
           
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return NULL;
        }
        token = strtok(NULL, " ");
        i++;
    }

    words[word_count] = NULL;

    return (words);
}
