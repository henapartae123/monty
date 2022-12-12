#include "monty.h"
/**
 * set_stack - sets the format of the data to a stack (LIFO)
 * @stack: double pointer to the top of the stack
 * @line: script line number
 */
void set_stack(stack_t **stack, unsigned int line)
{
    (void)stack;
    (void)line;
    var.len_queue = STACK;
}