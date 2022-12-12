#include "monty.h"
/**
 * instruct_rotr - rotr rotates the stack to the bottom
 * @stack: pointer to the top node of stack
 * @line: the current file line number calling instruction
 */
void instruct_rotr(stack_t **stack, unsigned int line __attribute__((unused)))
{
    if (*stack)
        *stack = (*stack)->prev;
}