#include "monty.h"

/**
 * z_queue - Prints the top element of the queue
 * @top: Pointer to the head of the queue
 * @counter: Line number
 * Return: No return value
*/
void z_queue(stack_t **top, unsigned int counter)
{
	(void)top;
	(void)counter;
	bt.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack
 * @n: New value
 * @top: Head of the stack
 * Return: No return
*/
void addqueue(stack_t **top, int n)
{
	stack_t *n_node, *a;

	a = *top;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
	}
	n_node->n = n;
	n_node->next = NULL;
	if (a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{
		*top = n_node;
		n_node->prev = NULL;
	}
	else
	{
		a->next = n_node;
		n_node->prev = a;
	}
}
