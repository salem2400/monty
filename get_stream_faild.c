#include "monty.h"

/**
 * 
 * 
 * 
 * 
 * 
 */
void get_stream_faild(char *filename)
{
    fprintf(stderr, "ERROR: Can't ipen file %s\n",filename);
    free_args();
    exit(EXIT_FAILURE);
}
