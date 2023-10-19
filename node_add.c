#include "monty.h"
/**
 * st_addnode - function to add node at start of stack
 * @head:pointer to the pointer to head node
 * @n: value to be added
 * Return: Pointer to the added node
 */
void st_addnode(stack_t **head, int n)
{
stack_t *newnode, *temp;
newnode = (stack_t *)malloc(sizeof(stack_t *));

if (newnode == NULL)
{
printf("Error\n");
exit(0);
}
(newnode)->n = n;
(newnode)->prev = NULL;
temp = *head;

if (temp != NULL)
{
while (temp->prev != NULL)
temp = temp->prev;
}

newnode->next = temp;
if (temp != NULL)
temp->prev = newnode;

*head = newnode;
}

/**
 * q_addnode - add node to the tail stack
 * @n: value
 * @head:pointer to head pointer of the stack
 * Return: no return
 */
void q_addnode(stack_t **head, int n)
{
stack_t *new_node, *temp;
temp = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
exit(0);
}
new_node->n = n;
new_node->next = NULL;
if (temp)
{
while (temp->next)
temp = temp->next;
}
if (!temp)
{
*head = new_node;
new_node->prev = NULL;
}
else
{
temp->next = new_node;
new_node->prev = temp;
}
}
