#include <stdio.h>
/**
* _isalpha - check description
* @c: An input character
* Description: checks for alphabetic character.
* Return: 1 if @c is latter, 0 otherwise.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
