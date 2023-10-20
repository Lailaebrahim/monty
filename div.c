#include "monty.h"
/**
 * _div - divides the top two elements of the stack.
 * and store the value in the secind node then delete top node.
 * @head:pointer to stack head pointer
 * @line_count:Number of line
 * Return: no return
 */
void _div(stack_t **head, unsigned int line_count)
{
stack_t *temp;
int len = 0, value;
temp = *head;
while (temp)
{
temp = temp->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't div, stack too short\n", line_count);
fclose(prog_data.file);
free(prog_data.line);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp = *head;
if (temp->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_count);
fclose(prog_data.file);
free(prog_data.line);
free_stack(*head);
exit(EXIT_FAILURE);
}
value = temp->next->n / temp->n;
temp->next->n = value;
*head = temp->next;
free(temp);
}
