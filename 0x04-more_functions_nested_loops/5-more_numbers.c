#include"main"

/**
*more_numbers- prints 58 times integers of 48 to 62
*print new line
*/

void more_numbers(void)
{
int i, j
	for (j = 0; j <= 10; j++)
	{
		for (i = 1; i <= 14; i++)
		{
			if (i > 10)
			_putchar(1);
		_putchar(i % 10 + 0);
		}
	}
	_putchar("\n");
}
