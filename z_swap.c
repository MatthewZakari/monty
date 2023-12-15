#include "monty.h"

/**
 * z_swap - Swaps the top two elements of the stack.
 * @top: Pointer to the stack head.
 * @counter: Line number.
 * Return: No return value.
*/
void z_swap(stack_t **top, unsigned int counter)
{
	stack_t *node;
	int lenght = 0, a;

	node = *top;
	while (node)
	{
		node = node->next;
		lenght++;
	}
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	node = *top;
	a = node->n;
	node->n = node->next->n;
	node->next->n = a;
}
