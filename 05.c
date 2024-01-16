#include <stdio.h>
#include <stdlib.h>

#define ABS(X) X > 0 ? X : -X

int main(int ac, char **av)
{
	if (ac < 2) {
		dprintf(2, "Wrong number of arguments: requires 1+, got 0\n");
		return (EXIT_FAILURE);
	}

	for (int i = 1; av[i]; ++i) {
		int nb = atoi(av[i]);
		printf("abs of %d: %d\n", nb, ABS(nb));
	}

	return (EXIT_SUCCESS);
}
