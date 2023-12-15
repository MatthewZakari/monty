#include "monty.h"

/**
  * z_rotl - rotates the stack to the top
  * @top: pointer to the stack head
  * @counter: line number
  * Return: void
 */
void z_rotl(stack_t **top,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *top, *a;

	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	a = (*top)->next;
	a->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *top;
	(*top)->next = NULL;
	(*top)->prev = tmp;
	(*top) = a;
}
