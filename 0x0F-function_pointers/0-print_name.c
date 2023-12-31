/**
 * print_name - prints a name
 * @name: name of a person
 * @f: function pointer
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
