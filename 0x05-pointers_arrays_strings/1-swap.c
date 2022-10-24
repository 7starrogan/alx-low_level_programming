#include"main.h"

/**
*swap_int-swaps the values of two integers
*@a:value of first integer
*@b:value of second integer
*return 0
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
