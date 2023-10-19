#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @lineNumber: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int lineNumber)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", lineNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	result = h->next->n * h->n;
	h->next->n = result;
	*head = h->next;
	free(h);
}
