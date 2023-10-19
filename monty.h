#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct prog_data - a struct to collect and pass data of program
 * @arg: arguments of instruction to be executed
 * @file: pointer to monty file
 * @line: line to be executed
 * @stack_or_queue: flag to switch between stack and queue
 * @line_count: counts number of executed lines
 * Description: store data of the program
 */
typedef struct prog_data
{
char *arg;
FILE *file;
char *line;
int stack_or_queue;
unsigned int line_count;
}  prog_data_t;

extern prog_data_t prog_data;


/**********************Helper Functions********************/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void line_execute(char *_line, stack_t **prog_stack, unsigned int line_count,
		  FILE *file);
void free_stack(stack_t *head);
void st_addnode(stack_t **head, int value);
void q_addnode(stack_t **head, int value);

/**********************Opcode Functions********************/
void _push(stack_t **head, unsigned int number);
void _pall(stack_t **head, unsigned int number);
void _pint(stack_t **head, unsigned int number);
void _pop(stack_t **head, unsigned int counter);
void _swap(stack_t **head, unsigned int counter);
void _add(stack_t **head, unsigned int counter);
void _nop(stack_t **head, unsigned int counter);
void _sub(stack_t **head, unsigned int line_number);
#endif
