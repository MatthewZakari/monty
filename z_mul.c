#include "monty.h"

/**
 * z_mul - performs multiplication on the top two elements of the stack.
 * @top: pointer to the stack head
 * @counter: line number
 * Return: nothing
*/
void z_mul(stack_t **top, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	node = *top;
	a = node->next->n * node->n;
	node->next->n = a;
	*top = node->next;
	free(node);
}
