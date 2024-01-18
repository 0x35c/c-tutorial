/* Display a string (const char *) without using [] operator
 * Now, please note that it is much more pratical to use this []
 * The [] operator behaves as following: 
 * a[b] = *(a + b) or *(b + a)
 * it is then also the same as b[a] but you should not use this last one
 * The idea of this operator is to access (mostly in an array) a specific element
 * It will be really useful for looping through an array or access it through
 * values (for ex with #define)
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void display_arg(const char *str);

static void display_arg(const char *str) {
	int i = 0;
	// => while (str[i] != '\0')
	while (*(str + i) != '\0') {
		// => write(1, &str[i], 1)
		write(1, str + i, 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac < 2) {
		dprintf(2, "Wrong number of arguments\n");
		return (EXIT_FAILURE);
	}

	int i = 1;
	while (av[i] != NULL) {
		display_arg(av[i]);
		i++;
	}

	return (EXIT_SUCCESS);
}
