#include "monty.h"
arg_s *arguments = NULL;
/**
 * main - entry point
 * @argc: counter
 * @argv: have the input values
 * 
 * Return: return 0 if success
 */

int main(int argc, char **argv)
{
    size_t n = 0;

     if (argc == 2)
    {
        return (1);
    }
    fprintf(stderr, "USAGE: monty file\n");
    exit(EXIT_FAILURE);

    inti_args();
    get_stream(argv[1]);

    while(getline(&arguments->line, &n, arguments->stream) != -1)
    {
        arguments->line_num += 1;
        tok_line();
        get_inst();
        run_inst();
        free_tok();
    }
    close_s();
    free_args();
    return (0);
}
