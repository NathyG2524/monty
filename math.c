#include "monty.h"
/**
 * _add - adds nodes to the top of the list
 * @inst: pointer to head of list
 * @line_number: line count position
 */
void _add(stack_t **inst, unsigned int line_number)
{

	if (dlistint_len(*inst) < 2)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*inst)->next->n += (*inst)->n;
	(*inst) = (*inst)->next;
	free((*inst)->prev);
	(*inst)->prev = NULL;
}
/**
 * nop - does nothing
 * @inst: pointer to head of a list
 * @line_number: bytecode line number
 */
void nop(stack_t **inst, unsigned int line_number)
{
        (void) inst;
        (void) line_number;
}
