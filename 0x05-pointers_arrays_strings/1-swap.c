#include"main.h"

/**
*swap_int-swaps the values of two integers
*@a:value of first integer
*@b:value of second integer
*return 0
*/

void swap_int(int *a, int *b)
{
	 int m = 25;
	int n = 100;
	 _putchar("m is %d, n is %d\n", m, n);
	swap(&m, &n);
	 _putchar("m is %d, n is %d\n", m, n);
return (0);
}
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
