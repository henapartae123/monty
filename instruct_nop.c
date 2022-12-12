#include "monty.h"
/**
 * instruct_nop - nop doesn’t do anything
 * @stack: pointer to the top node of stack
 * @line: the current file line number calling instruction
 */
void instruct_nop(stack_t **stack __attribute__((unused)), unsigned int line)
{
    (void)line;
}