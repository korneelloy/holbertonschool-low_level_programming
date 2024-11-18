/**
 * print_name- prints given name according to function pointer
 * @name: (pointer to string of) name
 * @f: pointer to function type with char ptr as argument and no return
 *
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
