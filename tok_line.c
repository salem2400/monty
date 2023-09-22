#include "monty.h"

/**
 * tok_line - tokinaize the line
 */

void tok_line(void)
{
    int x = 0;
    char *dlim = "\n";
    char *tok = NULL;
    char *lcpy = NULL;

    lcpy = malloc(sizeof(char) * (strlen(arguments->line) + 1));
    strcpy(lcpy, arguments->line);

    while (lcpy)
    {
        arguments->n_tok += 1;
        tok = strtok(NULL, dlim);
    }
    arguments->tok = malloc(sizeof(char *) * (arguments->n_tok + 1));
    strcpy(lcpy, arguments->line);
    tok = strtok(lcpy, dlim);
    while (tok)
    {
        arguments->tok[x] = malloc(sizeof(char *) * (strlen(tok) + 1));

        if (arguments->tok[x]== NULL)
        {
        fprintf(stderr, "ERROR: malloc faild\n");
        free_args();
        exit(EXIT_FAILURE); 
        }
        strcpy(arguments->tok[x], tok);
        tok = strtok(NULL, dlim);
        x++;
    }
    arguments->tok[x] = NULL;
    free(lcpy);
}
