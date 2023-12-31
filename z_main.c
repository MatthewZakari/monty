#include "monty.h"
bas_t bt = {NULL, NULL, NULL, 0};

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t s = 0;
	ssize_t r_line = 1;
	stack_t *stack = NULL;
	unsigned int cter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bt.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_line > 0)
	{
		content = NULL;
		r_line = getline(&content, &s, file);
		bt.content = content;
		cter++;
		if (r_line > 0)
		{
			execute(content, &stack, cter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
