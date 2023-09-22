#include "monty.h"

/**
* get_instruct - Sets the instruction based on the first token
* in the input line
*/

void get_inst(void)
{
    int x = 0;
    instruction_t inst[] = {
    {"push", &push}, {"pop", &pop},
    {"pint", &pint}, {"swap", &swap},
    {"nop", &nop}, {"add", &add},
    {"pall", &pall}, {"sub", &sub},
    {"my_div", &my_div}, {"my_mul", &my_mul},
    {"rotl", &rotl}, {"rotr", &rotr},
    {"stack", &stack}, {"queve", &queue},
    {"pstr", &pstr}, {"pchar", &pchar},
    { "mod", &mod},
    {NULL, NULL}
};

    if (arguments->n_tok == 0) 
    {
        return;
    }
    

    for (; inst[x].opcode != NULL; x++)
    {
        if (strcmp(inst[x].opcode, arguments->tok[0]) == 0)
        {
            arguments->instruction->opcode = inst[x].opcode;
            arguments->instruction->f = inst[x].f;
            return;
        }

    }
    fprintf(stderr, "L%d: unknown instruction %s\n",
    arguments->line_num, arguments->tok[0]);
    close_s();
    free_tok();
    free_tok();
    exit(EXIT_FAILURE);
}
