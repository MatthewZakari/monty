#include "monty.h"

/**
 * z_pop - prints the top element
 * @top: pointer to the stack head
 * @counter: line number
 * Return: void (no return value)
 */
void z_pop(stack_t **top, unsigned int counter)
{
	stack_t *node;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	node = *top;
	*top = node->next;
	free(node);
}
