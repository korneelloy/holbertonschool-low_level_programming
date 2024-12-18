#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - get corresponding function
 * @s: operator
 *
 * Return: pointer to corresponding function of type int f(int, int)
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].f != NULL)
	{
		if (*s == *ops[i].op && strlen(s) == 1)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
