#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
* @n: the number to extract the last digit from
* Return: value of last digit of n.
*/
int print_last_digit(int n)
{
int ld;
if (n < 0)
n = -n;
ld = n % 10;
if (ld < 0)
ld = -ld;
_putchar('0' + ld);
return (ld);
}
