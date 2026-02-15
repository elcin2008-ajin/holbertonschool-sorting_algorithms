#include "shell.h"

/**
 * free_args - free allocated memory
 * @args: argument array
 */

void free_args(char **args)
{
	free(args);
}
