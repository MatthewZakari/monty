#include "monty.h"

/**
 * z_pchar - Outputs the character at the top of the stack & \n
 * @top: Pointer to the stack head
 * @counter: Line number
 * Return: No return value
 */
void z_pchar(stack_t **top, unsigned int counter)
{
	stack_t *node;

	node = *top;
	if (!node)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	if (node->n > 127 || node->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", node->n);
}
