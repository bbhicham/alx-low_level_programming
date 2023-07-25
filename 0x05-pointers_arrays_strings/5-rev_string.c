#include "main.h"
/**
 * rev_string - print rev s
 * @s: input string to printed
 */
void rev_string(char *s)
{
int i = 0;
int j;
char t;
while (s[i])
{
i++;
}
for (j = 0; j < (i / 2); j++)
{
t = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = t;
}

}
