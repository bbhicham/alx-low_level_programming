#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, total_len = 0;
char *concatenated;
unsigned int i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

total_len = len1 + n;

concatenated = malloc(sizeof(char) * (total_len + 1));
if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (i = 0; i < n; i++)
concatenated[len1 + i] = s2[i];

concatenated[total_len] = '\0';

return (concatenated);
}
