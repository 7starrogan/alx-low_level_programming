#include"main.h"

/**
*_strlen-returns the length of a string
*@s:string character
*incremeant up to when the last character is NULL,\0
*Return: length
*/

int _strlen(char *s)
{

int m = 0;
	while (*(s + m) != 0)
	{
		m++;
	}
	return (m);
}
