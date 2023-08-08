#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector (array of strings).
 *
 * Return: A pointer to the new string, or NULL if allocation fails or ac is 0.
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j ;
    int total_len = 0;
    int newline_count = ac - 1;

    if (ac == 0 || av == NULL)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        total_len += strlen(av[i]);
    }

    total_len += newline_count + 1;

    str = (char *)malloc(total_len * sizeof(char));

    if (str == NULL)
        return NULL;

    j = 0;
    for (i = 0; i < ac; i++)
    {
        strcpy(str + j, av[i]);
        j += strlen(av[i]);
        if (i < ac - 1)
        {
            str[j] = '\n';
            j++;
        }
    }
    str[i++] = '\n';

    return str;
}
