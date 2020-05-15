#include "monty.h"
/**
 * *get_op_func - selects the correct opcode to perform
 * @op: opcode
 * Return: pointer to a function corresponding to the opcode
 */
void (*get_op_func(line_t line, op_t *buf))(stack_t **stack, unsigned int linn)
{
	instruction_t opfun[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{NULL, NULL}
	};
	int x = 0;

	while (opfun[x].opcode)
	{
		if (strcmp(opfun[i].opcode, line.tokenarray[0]) == 0)
			break;
		x++;
	}
	if (opfun[x].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", linn, opcode);
		free_stack(*stack);
		return (NULL);
	}
	return (opfun[i].f);
}
