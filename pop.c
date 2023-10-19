#include "monty.h"
/**
 * _pop - remove top node and prints it
 * @head: pointer to the stack head pointer
 * @line_number: Number of line
 * Return: no return
 */
void _pop(stack_t **head, unsigned int line_number)
{
stack_t *temp = *head;
if (temp == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
fclose(prog_data.file);
free(prog_data.line);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", temp->n);
*head = temp->next;
free(temp);
temp = NULL;
}
