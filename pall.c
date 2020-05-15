#include "monty.h"
/**
 * pall - prints all values on the stack, starting from the top of the stack
 * @stack: pointer to pointer to head of the stack
 * @line_n: line number
 */
void pall(stack_t **stack, unsigned int line_n)
{
	(void)line_n;
	stack_t *element;

	element = *stack;
	for (; element != NULL;)
	{
		printf("%d\n", element->n);
		element = element->next;
	}
}
