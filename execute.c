#include "monty.h"
/**
 *line_execute - executes the opcode
 * @_line: line to be executed
 * @prog_stack: pointer to the top node pointer
 * @line_count: Number of line
 * @file: pointer to file
 * Return: no return
 */
void line_execute(char *_line, stack_t **prog_stack,
		 unsigned int line_count, FILE *file)
{
instruction_t op_arr[] = {
			  {"push", _push}, {"pall", _pall}, {"pint", _pint},
			  {"pop", _pop}, {"swap", _swap},
			  {"add", _add}, {"sub", _sub},
			  {"nop", _nop}, {NULL, NULL}
};

unsigned int i = 0;
char *op_code = NULL;

op_code = strtok(_line, " \n\t");
if (op_code && op_code[0] == '#')
return;

prog_data.arg = strtok(NULL, " \n\t");
while (op_arr[i].opcode && op_code)
{
if (strcmp(op_code, op_arr[i].opcode) == 0)
{op_arr[i].f(prog_stack, line_count);
return; }
i++;
}
if (op_code && op_arr[i].opcode == NULL)
{fprintf(stderr, "L%d: unknown instruction %s\n", line_count, op_code);
fclose(file);
free(_line);
free_stack(*prog_stack);
exit(EXIT_FAILURE); }
return;
}
