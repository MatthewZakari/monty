#include "monty.h"

/**
 * z_pall - prints the stack
 * @top: pointer to the stack head
 * @counter: unused variable
 * Return: void
 */
void z_pall(stack_t **top, unsigned int counter)
{
	stack_t *node;
	(void)counter;

	node = *top;
	if (node == NULL)
		return;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
