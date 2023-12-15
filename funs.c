#include <ctype.h>
#include "monty.h"

/**
 * _isdigit - checks if a string is a digit
 * @str: string to check
 * Return: 1 if the string is a digit, 0 otherwise
 */
int _isdigit(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * add_dnodeint - adds a new node at the beginning of a stack_t list
 * @stack: double pointer to the top of the stack
 * @n: value of the new element
 * Return: address of the new element, or NULL if it failed
 */
stack_t *add_dnodeint(stack_t **stack, const int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;

	return (new_node);
}

