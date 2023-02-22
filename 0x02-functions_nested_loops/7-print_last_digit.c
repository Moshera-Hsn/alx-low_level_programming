#include <stdio.h>
#include "main.h"
/**
* print_last_digit - check.
* @l: An input intger.
* Description: prints the last digit of a number int print_last_digit(int).
* Return: @last_digit.
*/
int print_last_digit(int l)
{
int last_digit;
last_digit = l % 10;
printf("%d", last_digit);
return (last_digit);
}
