iamyinka
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x02-functions_nested_loops/5-sign.c
@iamyinka
iamyinka Finish Task
 1 contributor
Executable File  26 lines (25 sloc)  407 Bytes
#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: type int integer, can be negative or positive
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1 if +, 0 if 0, and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
