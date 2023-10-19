#include "monty.h"
/**
 * _pint - prints the top element of stack
 * @head: pointer to stack head pointer
 * @line_count: Number of line
 * Return: no return
 */
void _pint(stack_t **head, unsigned int line_count)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_count);
fclose(prog_data.file);
free(prog_data.line);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
