#include "monty.h"

/**
 * op_nop - The opcode nop doesn’t do anything.
 * @stack: doubly linked list rep of a stack/queue
 * @line_number: Current line_number in the file
 * Return: void
 */

void op_nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
