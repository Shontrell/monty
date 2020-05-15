#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: pointer to a pointer to the head of stack
 * @line_n: line number
 */
void add(stack_t **stack, unsigned int line_n)
{
	stack_t *element;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}

	element = *stack;
	(*stack)->next->n += (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(element);
}
