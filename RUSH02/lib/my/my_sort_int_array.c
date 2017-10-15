/*
** EPITECH PROJECT, 2017
** CPool_Day04_2017
** File description:
** sort array
*/

void	my_sort_int_array(int *array, int size)
{
	int	i = 0;
	int	stock = 0;

	while (i < size - 1) {
		if (array[i] > array[i + 1]) {
			stock = array[i];
			array[i] = array[i + 1];
			array[i + 1] = stock;
			i = 0;
		} else
			i++;
	}
}
