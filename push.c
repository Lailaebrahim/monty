#include "monty.h"
/**
 * _push - add node to the stack
 * @head: pointer to head pointer of the data structure
 * @line_number: Number of line
 * Return: no return
 */
void _push(stack_t **head, unsigned int line_number)
{
int i = 0, value = 0, flag = 0;

if (prog_data.arg != NULL)
{
if (prog_data.arg[0] == '-')
++i;
for (; prog_data.arg[i] != '\0'; i++)
{
if (prog_data.arg[i] > 57 || prog_data.arg[i] < 48)
flag = 1; }
if (flag == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
free(prog_data.line);
free_stack(*head);
fclose(prog_data.file);
exit(EXIT_FAILURE); }
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
free(prog_data.line);
free_stack(*head);
fclose(prog_data.file);
exit(EXIT_FAILURE);
}
value = atoi(prog_data.arg);
if (prog_data.stack_or_queue == 0)
st_addnode(head, value);
else
q_addnode(head, value);
}
