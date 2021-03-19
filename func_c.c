#include "holberton.h"

/**
 * func_c - Detecte if a data type is a char
 *
 * @li: List
 *
 * Return: Count
 */

int func_c(va_list li)
{
	char *a;
	int count = 0;
	int i = 0;

	a = va_arg(li, char *);

	write(1, &a[i], 1);
	count++;
	return (count);
}
