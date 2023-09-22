#include "monty.h"

/**
 * inti_args - initialize a
 *  pointer to arg_s structure 
 */

void inti_args(void)
{
    arguments= malloc(sizeof(arg_s));
    if (arguments == NULL)
    {
    fprintf(stderr, "ERROR: malloc faild\n");
    free_args();
    exit(EXIT_FAILURE);
    }

    arguments->instruction = malloc(sizeof(instruction_t));
    if (arguments->instruction == NULL)
    {
    fprintf(stderr, "ERROR: malloc faild\n");
    free_args();
    exit(EXIT_FAILURE);
    }
    arguments->stream = NULL;
    arguments->line = NULL;
    arguments->n_tok = 0;
    arguments->line_num = 0;
}
