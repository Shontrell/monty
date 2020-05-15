#include "monty.h"
/**
 * free_stack - frees stack
 * @head: pointer to pointer to head of the stack
 */
void free_stack(stack_t **head)
{
	stack_t *hold;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
}
