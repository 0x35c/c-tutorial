#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av, char **envp)
{
	if (ac != 1) {
		dprintf(2, "Wrong number of arguments: requires 0, got %d\n", ac - 1);
		return (EXIT_FAILURE);
	}

	printf("The name of the binary is: %s\n", av[0]);
	printf("The first env variable is: %s\n", envp[0]);

	return (EXIT_SUCCESS);
}
