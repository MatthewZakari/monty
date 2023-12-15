#include "monty.h"

/**
 * z_rotr - Rotates the stack to the bottom
 * @top: Pointer to the stack's head
 * @counter: Line number
 * Return: No return value
 */
void z_rotr(stack_t **top, __attribute__((unused)) unsigned int counter)
{
	stack_t *cp;

	cp = *top;
	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *top;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*top)->prev = cp;
	(*top) = cp;
}
