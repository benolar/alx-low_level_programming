/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: collection of data items/elements
 * @size: size of array
 * @action: function pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	(*action)(array[0]);
	(*action)(array[1]);
	(*action)(array[2]);
	(*action)(array[3]);
	(*action)(array[4]);
}
