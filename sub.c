#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@lineNumber: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int lineNumber)
{
	stack_t *result;
	int sus, nodes;

	result = *head;
	for (nodes = 0; result != NULL; nodes++)
		result = result->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", lineNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = *head;
	sus = result->next->n - result->n;
	result->next->n = sus;
	*head = result->next;
	free(result);
}
