#include "main.h"
/**
* _strcmp - compare 2 chars
* @s1: string
* @s2: string to compare
* Return: number of the diference bettweb s1 and s2
*/
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
