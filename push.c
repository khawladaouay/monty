#include "monty.h"
/**
  * push - adds element on top of the stack
 * @stack: stack of file lines
 * @line_number: number of file lines
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
stack_t *newNode;
char *value;
	(void)line_number;
value = malloc(sizeof(char));
if (value == NULL)
return (NULL);
newNode = malloc(sizeof(stack_t));
if (newNode == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_stack(*stack);
	exit(EXIT_FAILURE);
}
newNode->n = atoi(value);
newNode->prev = NULL;
if (*stack == NULL)
	newNode->next = NULL;
else
{
	newNode->next = *stack;
	(*stack)->prev = newNode;
}
	*stack = newNode;
	free(value);
}
