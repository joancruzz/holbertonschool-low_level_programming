#include "holberton.h"

/**
*_abs - Compute absolute value for an integer
*@j: Check for absolute value of integer
*Return: 0 or 1
*/

int _abs(int j)
{
	if (j > 0)
		return (j);
	else
		return ((-1) * j);

}
