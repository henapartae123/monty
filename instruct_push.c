#include "monty.h"

/**
 * instruct_push - pushes a data/number to stack
 * @stack: pointer to the top node of stack
 * @line: the current file line number calling instruction
 */
void instruct_push(stack_t **stack, unsigned int line)
{
    char *str;
    int num;
    str = strtok(NULL, "\n\t\r ");
    if (str == NULL || check_isdigit(str))
    {
        fprintf(stderr, "L%u: usage: push integer\n", line);
        exit(EXIT_FAILURE);
    }
    num = atoi(str);
    if (!add_node(stack, num))
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    var.len_stack++;
}