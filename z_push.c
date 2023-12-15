#include "monty.h"

/**
 * z_push - Adds a node to the stack
 * @top: Pointer to the stack head
 * @counter: Line number
 * Return: No return value
*/
void z_push(stack_t **top, unsigned int counter)
{
	int m, k = 0, flg = 0;

	if (bt.arg)
	{
		if (bt.arg[0] == '-')
			k++;
		for (; bt.arg[k] != '\0'; k++)
		{
			if (bt.arg[k] > 57 || bt.arg[k] < 48)
				flg = 1; }
		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bt.file);
			free(bt.content);
			free_stack(*top);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bt.file);
		free(bt.content);
		free_stack(*top);
		exit(EXIT_FAILURE); }
	m = atoi(bt.arg);
	if (bt.lifi == 0)
		addnode(top, m);
	else
		addqueue(top, m);
}
