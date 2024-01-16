#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac < 2) {
		dprintf(2, "Wrong number of arguments: requires 1+, got 0\n");
		return (EXIT_FAILURE);
	}

	int i = 1;
	while (av[i] != NULL) {
		printf("Arg number %d => %s\n", i, av[i]);
		i++;
	}

	return (EXIT_SUCCESS);
}
