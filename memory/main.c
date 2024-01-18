/* Introduction to the memory in C with stack and heap
 * Please, compile with gcc -DSTACK_ERROR main.c
 * if you want to see the stack error
 * Else, it will just show how malloc() and free() work
 */

#include <stdio.h>
#include <stdlib.h>

#ifdef STACK_ERROR
static int *stack_variable(void);
#endif

static int *heap_variable(void);

#ifdef STACK_ERROR
static int *stack_variable(void) {
	int a = -42;
	return (&a);
}
#endif

static int *heap_variable(void) {
	/* Allocate 1 block of memory of the size of an int (here, 4bytes).
	 * If we don't have any more space left on heap, malloc will fail
	 * so we need to protect the allocation (even if it will likely never
	 * happen on any "recent" computer)
	 */
	int *b = malloc(1 * sizeof(int));
	if (b == NULL)
		return (NULL);
	*b = 42;
	return (b);
}

int main(void)
{
#ifdef STACK_ERROR
	int *a = stack_variable();
	if (a == NULL) {
		dprintf(2, "Stack error\n");
		// return (EXIT_FAILURE); for demonstration purposes, we don't return here
	}
	printf("a = %p\n", a);
	printf("*a = %d\n", *a);
#endif

	int *b = heap_variable();
	if (b == NULL) {
		dprintf(2, "Allocation error\n");
		return (EXIT_FAILURE);
	}
	printf("b = %p\n", b);
	printf("*b = %d\n", *b);
	/* Don't forget to free the allocated memory
	 * You can check if all the memory has been freed with valgrind
	 * See https://valgrind.org/
	 */
	free(b);

	return (EXIT_SUCCESS);
}
