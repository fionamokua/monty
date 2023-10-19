#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @lineNumber: line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int lineNumber)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lineNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
