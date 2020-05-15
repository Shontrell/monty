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
	return (EXIT_SUCCESS);
}
