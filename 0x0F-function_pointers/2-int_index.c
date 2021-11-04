/**
 * int_index - search integer
 * @array: array
 * @size: size array
 * @cmp: pointer to function
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i;

		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
