#include "monty.h"
/**
 * main - monty program's Entry point
 * @argc: argument count on command line
 * @argv: an array of arguments on command line
 * Return: EXIT_SUCCESS, or EXIT_FAILURE if fail
 */
int main(int argc, char **argv)
{
	FILE *file = fopen(argv[1], "r");
	char *buffer = NULL;
	size_t size = 0;
	unsigned int x = 0;
	char **token;
	void (*f)(stack_t **, unsigned int);
	stack_t *stack = NULL;
		
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	for (; getline(&buffer, &size, file) > 0; x++)
	{
		token[0] = strtok(buffer, " ");
		f = get_op_func(token);
		token[1] = strtok(NULL, " ");
		global = atoi(token[1]);
		f(&stack, x);
	}
	free(buffer);
	free_stack(stack);
	fclose(file);
	return (EXIT_SUCCESS);
}
