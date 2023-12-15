#include "monty.h"

/**
 * z_mod - calculates the modulus of the top two element
 * @top: pointer to the stack head
 * @counter: line number
 * Return: nothing
 */
void z_mod(stack_t **top, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
	a = node->next->n % node->n;
	node->next->n = a;
	*top = node->next;
	free(node);
}
