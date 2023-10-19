#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int stacklen = 0, result;

	h = *head;
	while (h)
	{
		h = h->next;
		stacklen++;
	}
	if (stacklen < 2)
	{
		fprintf(stderr, "L%d: can't get modulo, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = h->next->n % h->n;
	h->next->n = result;
	*head = h->next;
	free(h);
}
