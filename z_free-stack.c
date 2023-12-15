#include "monty.h"

/**
* free_stack - frees a doubly linked list
* @top: head of the stack
*/
void free_stack(stack_t *top)
{
	stack_t *a;

	a = top;
	while (top)
	{
		a = top->next;
		free(top);
		top = a;
	}
}
