#include "monty.h"

/**
 * z_pstr - Outputs the string from the top of the stack,
 * followed by a new line
 *
 * @top: Pointer to the stack head
 * @counter: Line number
 * Return: No return value
 */
void z_pstr(stack_t **top, unsigned int counter)
{
	stack_t *node;
	(void)counter;

	node = *top;
	while (node)
	{
		if (node->n > 127 || node->n <= 0)
		{
			break;
		}
		printf("%c", node->n);
		node = node->next;
	}
	printf("\n");
}
