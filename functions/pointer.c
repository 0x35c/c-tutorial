/* This one is a bit more complex, it is strongly advised
 * to see ../pointers before this
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

static int ft_abs(int nb);
static int ft_double(int nb);
static void ft_iter(int (*fn_ptr)(int), int *array, size_t size);

static int ft_abs(int nb) {
	if (nb < 0)
		return (-nb);
	return (nb);
}

static int ft_double(int nb) {
	return (nb * 2);
}

static void ft_iter(int (*fn_ptr)(int), int *array, size_t size) {
	for (size_t i = 0; i < size; i++) {
		array[i] = (*fn_ptr)(array[i]);
	}
}

int main(void)
{
	int array[SIZE] = { 1, -3, 4, 5, -8, 0 };
	ft_iter(&ft_abs, array, SIZE);
	ft_iter(&ft_double, array, SIZE);

	for (size_t i = 0; i < SIZE; i++) {
		printf("%d ", array[i]);
	}

	return (EXIT_SUCCESS);
}
