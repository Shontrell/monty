#include "monty.h"
int global = 0;
/**
 * push - pushes an element to the stack
 * @stack: pointer to a pointer to the head of stack
 * @line_n: line number
 */
void push(stack_t **stack, unsigned int line_n)
{
	stack_t *element;

	if (stack == NULL)
		return;
	element = malloc(sizeof(stack_t));
	if (element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	if (*stack == NULL)
	{
		element->next = *stack;
		element->prev = NULL;
		*stack = element;
	}
	element->n = global;
	if (!element->n)
        {
                fprintf(stderr, "L%u: usage: push integer\n", line_n);
                free_stack(stack);
                exit(EXIT_FAILURE);
        }
	element->next = *stack;
	element->prev = NULL;
	*stack = element;
}
