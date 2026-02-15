#include "shell.h"
#include <string.h>
#include <stdlib.h>

char **parse_line(char *line)
{
    int bufsize = 64, pos = 0;
    char **tokens = malloc(sizeof(char *) * bufsize);
    char *token;

    if (!tokens)
        return NULL;

    token = strtok(line, " \t\r\n");
    while (token)
    {
        tokens[pos++] = token;

        if (pos >= bufsize)
        {
            bufsize += 64;
            tokens = realloc(tokens, sizeof(char *) * bufsize);
            if (!tokens)
                return NULL;
        }

        token = strtok(NULL, " \t\r\n");
    }
    tokens[pos] = NULL;
    return tokens;
}
