#include "holberton.h"

/**
 * func_s - Detecte if a data type is a string
 *
 * @li: List
 *
 * Return: Count
 */

int func_s(va_list li)
{
	char *p;
	int a, count = 0;

	p = va_arg(li, char *);

	for (a = 0; p[a] != '\0'; a++)
	{
		write(1, &p[a], 1);
		count++;
	}
	return (count);
}
