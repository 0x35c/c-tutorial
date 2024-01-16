#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 2048

int main(int ac, char **av)
{
	if (ac != 2) {
		dprintf(2, "Wrong number of arguments\n");
		return (EXIT_FAILURE);
	}

	// Buffer to read the file (+1 for the null byte at end of buffer)
	char buffer[BUFFER_SIZE + 1];

	// Open the file in read-only mode
	int fd = open(av[1], O_RDONLY);
	if (fd == -1) {
		dprintf(2, "error: couldn't open file\n");
		return (EXIT_FAILURE);
	}

	// Read the file until 0 (EOF) or -1 (error)
	while (1) {
		int rv = read(fd, buffer, 2048);
		if (rv == -1) {
			dprintf(2, "error: couldn't read file\n");
			return (EXIT_FAILURE);
		}
		else if (rv == 0) {
			break;
		}
		buffer[rv] = '\0';
		printf("%s", buffer);
	}
	close(fd);

	return (EXIT_SUCCESS);
}
