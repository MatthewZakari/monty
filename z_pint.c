#include "monty.h"

/**
 * z_pint - Prints the top element
 * @top: Pointer to the stack head
 * @counter: Line number
 * Return: No return value
 */
void z_pint(stack_t **top, unsigned int counter)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}
