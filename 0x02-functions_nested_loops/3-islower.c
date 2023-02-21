#include <stdio.h>
/**
* _islower - check description.
* @c: An input character.
* Description: checks for lowercase character.
* Return: 1 if lowercase, 0 otherwise.
*/
int _islower(int c)
{
int r;
if (c >= 'a' && c <= 'z')
r = 1;
else
r = 0;
return (r);
}
