#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @lineNum: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int lineNum)
{
	stack_t *h;
	(void)lineNum;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
