#include "monty.h"

prog_data_t prog_data = {NULL, NULL, NULL, 0, 0};

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: Path of monty file to be executed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
FILE *file;
size_t buff_size = 0;
ssize_t read_count = 1;
char *_line = NULL;
stack_t *prog_stack = NULL;
int line_count = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
prog_data.file = file;
if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

while (read_count > 0)
{
_line = NULL;
read_count = getline(&_line, &buff_size, file);
prog_data.line = _line;
line_count++;
prog_data.line_count = line_count;
if (read_count > 0)
{
line_execute(_line, &prog_stack, line_count, file);
}
free(_line);
}

fclose(file);
free_stack(prog_stack);

return (EXIT_SUCCESS);
}
