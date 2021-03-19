#include "holberton.h"

/**
 * func_por - Detecte if a data type is a %
 *
 * Return: Count
 */

int func_por(void)
{
	int count = 0;

	write(1, "%", 1);
	count++;
	return (count);
}
