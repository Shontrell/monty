#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: pointer to a pointer to the head of stack
 * @line_n: line number
 */
void pop(stack_t **stack, unsigned int line_n)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_n);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next != NULL)
	{
		*stack = (*stack)->next;
		free((*stack)->prev);
		(*stack)->prev = NULL;
	}
	else
	{
		free(*stack);
		*stack = NULL;
	}
}
