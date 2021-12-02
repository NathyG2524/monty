#include "header.h"
/**
 * @push - Pushes the element into the first position in a stack
 * 
 * @inst: Pointer to the head in the list
 * @line_number: bytcode line number
 * @n: Integer 
 */
void push(stack_t **inst, unsigned int line_number, const char *n)
{
	if (!inst)
		return;
	if (is_number(n) == -1)
	{
		printf("L%u: usage: push integer\n", line_number);
		free_dlist(inst);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (add_element(inst, atoi(n)) == -1)
		{
			free_dlist(inst);
			exit(EXIT_FAILURE);
		}
	}
}
/**
 * @pall - Prints values of a stack
 * 
 * @inst:pointer to head of list
 * @line_number: line position of file content
 */
void pall(stack_t **inst, unsigned int line_number)
{
    stack_t *ptr = NULL;

    if (!inst || !*inst){
       return;
    }
    (void) line_number;

    ptr = *inst;
    
    while(ptr != NULL)
    {

    printf("%d\n", ptr->n);
    ptr = ptr->next;
    }

}
/**
 * @pint - prints elements of a list from top of stack
 * 
 * @inst: pointer to head of stack 
 * @line_number: line position count
 */
void pint(stack_t **inst, unsigned int line_number)
{
	if (!inst || !*inst)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*inst)->n);

}
