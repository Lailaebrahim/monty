#include "monty.h"
/**
 * _swap - adds the top two elements of the stack.
 * @head: pointer to the stack head pointer
 * @line_number: Number of line
 * Return: no return
 */
void _swap(stack_t **head, unsigned int line_number)
{
stack_t *temp = *head;
int len = 0, value = 0;

while (temp)
{
temp = temp->next;
len++;
}

if (len < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
fclose(prog_data.file);
free(prog_data.line);
free_stack(*head);
exit(EXIT_FAILURE);
}

temp = *head;
value = temp->n;
temp->n = temp->next->n;
temp->next->n = value;
}
