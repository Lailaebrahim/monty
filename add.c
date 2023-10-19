#include "monty.h"
/**
 * _add - adds the top two elements of the stack
 * and store the value in the secind node then delete top node.
 * @head: pointer to stack head pointer
 * @counter:Number of line
 * Return: no return
 */
void _add(stack_t **head, unsigned int line_number)
{
stack_t *temp;
int len = 0, value = 0;

temp = *head;
while (temp)
{
temp = temp->next;
len++;
}

if (len < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
fclose(prog_data.file);
free(prog_data.line);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp = *head;
value = temp->n + temp->next->n;
temp->next->n = value;
*head = temp->next;
free(temp);
temp = NULL;
}
