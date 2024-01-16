#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	write(1, "Hello world!\n", 14);
	return (EXIT_SUCCESS);
}
