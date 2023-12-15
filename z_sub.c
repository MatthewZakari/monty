#include "monty.h"

/**
  * z_sub - performs subtraction
  * @top: pointer to the stack head
  * @counter: line number
  * Return: no return value
 */
void z_sub(stack_t **top, unsigned int counter)
{
	stack_t *a;
	int sub_result, num_nodes;

	a = *top;
	for (num_nodes = 0; a != NULL; num_nodes++)
		a = a->next;
	if (num_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	a = *top;
	sub_result = a->next->n - a->n;
	a->next->n = sub_result;
	*top = a->next;
	free(a);
}
