#include "monty.h"
/**
 * instruct_pall - prints all of the data/number in the stack
 * @stack: pointer to the top node of stack
 * @line: the current file line number calling instruction
 */
void instruct_pall(stack_t **stack, unsigned int line)
{
    stack_t *head;
    (void)line;
    head = *stack;
    while (head != NULL)
    {
        printf("%d\n", head->n);
        head = head->next;
        if (head == *stack)
            return;
    }
}
