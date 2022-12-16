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
alx-low_level_programming/0x04-more_functions_nested_loops/5-more_numbers.c
@iamyinka
iamyinka Finish Task
 1 contributor
Executable File  26 lines (23 sloc)  338 Bytes
#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}
