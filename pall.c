#include "monty.h"
/**
 * _pall - function to print Stack
 * @head: pointer to head node
 * @number : NOT USED
 * Return: Number of node
 */
void _pall(stack_t **head, unsigned int __attribute__((unused)) number)
{
stack_t *temp = *head;
if (temp == NULL)
return;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
