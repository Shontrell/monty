#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the head node pointer of stack
 * @line_n: the line number
 */
void swap(stack_t **stack, unsigned int line_n)
{
	int value;

	if (stack == NULL || *stack == NULL || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}

	value = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = value;
}
