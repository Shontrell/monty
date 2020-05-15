#include "monty.h"
/**
 * pint - prints the value at the top of stack, followed by a new line
 * @stack: pointer to a pointer to the head of the stack
 * @line_n: line number
 */
void pint(stack_t **stack, unsigned int line_n)
{
	stack_t *element;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_n);
		exit(EXIT_FAILURE);
	}

	element = *stack;
	while (element)
	{
		if (element->prev == NULL)
			break;
		element = element->prev;
	}

	printf("%d\n", element->n);
}
