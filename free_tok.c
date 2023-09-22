#include "monty.h"

/**
 * free_tok - free the allocated momery
 */
void free_tok(void)
{
    int x = 0;

    if (arguments->tok == NULL)
    {
        return;
    }

    while (arguments->tok[x])
    {
        free(arguments->tok[x]);
        x++;
    }
    free(arguments->tok) ;
    arguments->tok = NULL;
}
