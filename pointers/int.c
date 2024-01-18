#include <stdio.h>
#include <stdlib.h>

// This functions takes a pointer on "int a" as a parameter
// it will then display its address and the value stored at this address
static void display_ptr(int *a_ptr);

static void display_ptr(int *a_ptr) {
	printf("a_ptr = %p\n", a_ptr);
	printf("*a_ptr = %d\n", *a_ptr);
}

int main(void)
{
	int a = 42;	

	printf("&a = %p\n", &a);
	printf("a = %d\n", a);

	display_ptr(&a);

	return (EXIT_SUCCESS);
}
