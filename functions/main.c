#include <stdio.h>
#include <stdlib.h>

static int ft_abs(int nb);

static int ft_abs(int nb) {
	if (nb < 0)
		return (-nb);
	return (nb);
}

int main(void) {
	int a = 3;
	int b = -2;

	printf("ft_abs(%d) => %d\n", a, ft_abs(a));
	printf("ft_abs(%d) => %d\n", b, ft_abs(b));

	return (EXIT_SUCCESS);
}
