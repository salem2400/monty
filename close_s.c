#include "monty.h"

/**
 * close_s - close all file obend befor
 */

void close_s(void)
{
    if (arguments->stream == NULL)
    {
      return;  
    }
    fclose(arguments->stream);
    arguments->stream = NULL;
}
