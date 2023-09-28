#include "main.h"
/**
* wildcmp - Compare strings
* @s: pointer to string params
* @p: pointer to string params
* Return: 0
*/
int wildcmp(char *s, char *p)
{
if (*s == '\0')
{
if (*p != '\0' && *p == '*')
{
return (wildcmp(s, p + 1));
}
return (*p == '\0');
}
if (*p == '*')
{
return (wildcmp(s + 1, p) || wildcmp(s, p + 1));
}
else if (*s == *p)
{
return (wildcmp(s + 1, p + 1));
}
return (0);
}
