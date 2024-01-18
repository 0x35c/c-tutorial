// Include for EXIT_SUCCESS/FAILURE macro (among others)
#include <stdlib.h>

// Include for write() function
#include <unistd.h>

// Main function, the program will start here
int main(void)
{
	// Write to STDIN (fd = 1) a const char* of 14 bytes
	write(1, "Hello world!\n", 14);

	// Everything went well, return EXIT_SUCCESS (=0) exit code
	return (EXIT_SUCCESS);
}
