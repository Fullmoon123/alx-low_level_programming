#include "main.h"
#include <stdio.h>

/**
 * * _strpbrk - Searches a string for any of a set of bytes.
 * * @s: string to be searched
 * * @accept: set of bytes to be searched for
 * *
 * * Return: if a set is matched - a pointer to the matched typr
 * *	if no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
int i, n;

for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n]
{
return (s + i);
}
}
}

return (NULL);
}
