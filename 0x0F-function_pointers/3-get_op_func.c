#include "3-calc.h"
/**
 * get_op_func - get the function
 * @s: operator
 * Return: integer flag operator
 **/
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
	int i = 0, len2;

	
	while (i < 5)
	{
		len2 = strlen(s);
		if (*s == *ops[i].op && len2 == 1)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}




