#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *p;
for (; *s != '\0'; s++)
{
for (p = accept; *p != '\0'; p++)
{
if (*s == *p)
{
count++;
}
}
if (*p == '\0')
{
return (count);
}
}
return (count);
}
