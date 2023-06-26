#include "main.h"
/**
* _isdigit -Detect digits from 0 t0 9
*
* @c: input integers
* Return: 1 if its a number and 0 otherwise
*
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
