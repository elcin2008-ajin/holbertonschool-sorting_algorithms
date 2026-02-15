#include "shell.h"

int main(void)
{
    char *line = NULL;
    char **args;

    while (1)
    {
        if (isatty(STDIN_FILENO))
            write(STDOUT_FILENO, "$ ", 2);

        line = _getline();
        if (!line)  // EOF və ya read error
            break;

        args = parse_line(line);
        if (!args)
        {
            free(line);
            continue;
        }

        // exit built-in
        if (args[0] && strcmp(args[0], "exit") == 0)
        {
            free_args(args);
            free(line);
            break;
        }

        execute_command(args);
        free_args(args);
        free(line);
    }

    return (0);
}
