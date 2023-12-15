#include "monty.h"

/**
 * addnode - insert a new node at the beginning of the stack
 * @top: pointer to the top of the stack
 * @n: value to store in the new node
 * Return: nothing
*/
void addnode(stack_t **top, int n)
{
	stack_t *n_node, *a;

	a = *top;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a)
		a->prev = n_node;
	n_node->n = n;
	n_node->next = *top;
	n_node->prev = NULL;
	*top = n_node;
}
