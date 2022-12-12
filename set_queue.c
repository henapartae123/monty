#include "monty.h"
/**
 * set_queue - sets the format of the data to a queue (FIFO)
 * @stack: double pointer to the top of the stack
 * @line: script line number
 */
void set_queue(stack_t **stack, unsigned int line)
{
    (void)stack;
    (void)line;
    var.len_queue = QUEUE;
}