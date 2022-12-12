#include "monty.h"

/**
 * call_oper - executes called stack instructios
 * @stack: pointer to top node of a stack
 * @oper: string copy of stack instruction
 * @line: the current file line number calling instruction
 */

void call_oper(stack_t **stack, char *oper, unsigned int line)
{
    int c;
    instruction_t all_opers[] = {
        {"push", instruct_push},
        {"pall", instruct_pall},
        {"pint", instruct_pint},
        {"pop", instruct_pop},
        {"swap", instruct_swap},
        {"add", instruct_add},
        {"nop", instruct_nop},
        {NULL, NULL}};

    for (c = 0; all_opers[c].opcode != NULL; c++)
    {
        if (strcmp(oper, all_opers[c].opcode) == 0)
        {
            all_opers[c].f(stack, line);
            return;
        }
    }
    fprintf(stderr, "L%u: unknown instruction %s\n", line, oper);
    exit(EXIT_FAILURE);
}
