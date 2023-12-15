#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", z_push}, {"pall", z_pall}, {"pint", z_pint},
				{"pop", z_pop},
				{"swap", z_swap},
				{"add", z_add},
				{"nop", z_nop},
				{"sub", z_sub},
				{"div", z_div},
				{"mul", z_mul},
				{"mod", z_mod},
				{"pchar", z_pchar},
				{"pstr", z_pstr},
				{"rotl", z_rotl},
				{"rotr", z_rotr},
				{"queue", z_queue},
				{"stack", z_stack},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *opt;

	opt = strtok(content, " \n\t");
	if (opt && opt[0] == '#')
		return (0);
	bt.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && opt)
	{
		if (strcmp(opt, opst[j].opcode) == 0)
		{	opst[j].f(stack, counter);
			return (0);
		}
		j++;
	}
	if (opt && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, opt);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
