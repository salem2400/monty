#include "monty.h"

/**
 * 
 * 
 * 
 * 
 */
void get_stream(char *filename)
{
    int fd;

    fd = open(filename, O_RDONLY);
  
    arguments->stream = fopen(filename, "r");
    if (arguments->stream == NULL)
    {
        close(fd);
        get_stream_faild(filename);
    }


}
