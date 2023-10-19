#include "monty.h"
/**
 * free_stack - frees a Stack.
 * @head: pointer to head of the stack
 * Return: nothing
 **/
void free_stack(stack_t *head)
{
if (head == NULL)
return;

while (head->next != NULL)
{
head = head->next;
free(head->prev);
}
free(head);
head->next = NULL;
head->prev = NULL;
head = NULL;
}
