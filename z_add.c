#include "monty.h"
/**
 * z_add - adds the top two elements of the stack.
 * @top: stack top
 * @counter: line_number
 * Return: no return
*/
void z_add(stack_t **top, unsigned int counter)
{
	stack_t *node;
	int length = 0, a;

	node = *top;
	while (node)
	{
		node = node->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	node = *top;
	a = node->n + node->next->n;
	node->next->n = a;
	*top = node->next;
	free(node);
}
