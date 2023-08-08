#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector (array of strings).
 *
 * Return: A pointer to the new string, or NULL if allocation fails or ac is 0.
 */
char *argstostr(int ac, char **av)
{
    int i, n, r = 0, l = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        for (n = 0; av[i][n]; n++)
            l++;
    }
    l += ac;

    str = malloc(sizeof(char) * (l + 1));
    if (str == NULL)
        return NULL;
    
    for (i = 0; i < ac; i++)
    {
        for (n = 0; av[i][n]; n++)
        {
            str[r] = av[i][n];
            r++;
        }
        str[r] = '\n'; // Place the newline character after each argument
        r++;
    }
    str[r] = '\0'; // Add the null terminator at the end

    return str;
}
