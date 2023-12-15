#include "monty.h"

/**
 * z_div - perform division on the first two nodes of the stack.
 * @top: pointer to the head of the stack
 * @counter: line number
 * Return: void
*/
void z_div(stack_t **top, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	node = *top;
	if (node->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	a = node->next->n / node->n;
	node->next->n = a;
	*top = node->next;
	free(node);
}

