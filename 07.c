#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	if (ac != 2) {
		dprintf(2, "Wrong number of arguments\n");
		return (EXIT_FAILURE);
	}

	if (!strcmp("yes", av[1])) {
		printf("Yes\n");
	}
	else if (!strcmp("no", av[1])) {
		printf("No 😞\n");
	}
	else {
		printf("Smth else\n");
	}

	return (EXIT_SUCCESS);
}
