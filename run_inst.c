#include "monty.h"

/**
 * run_inst - run the instuction
 */

void run_inst(void)
{
    stack_t **stack = NULL;

    if (arguments->n_tok == 0)
    {
        return;
    }
    arguments->instruction->f(stack, arguments->line_num);
}
