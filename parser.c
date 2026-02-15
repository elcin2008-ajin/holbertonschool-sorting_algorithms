#include "shell.h"

char **parse_line(char *line)
{
    int bufsize = 64, pos = 0;
    char **tokens = malloc(sizeof(char *) * bufsize);
    char *token;

    if (!tokens)
        return (NULL);

    token = strtok(line, DELIM);
    while (token)
    {
        tokens[pos++] = token;

        if (pos >= bufsize)
        {
            bufsize += 64;
            tokens = realloc(tokens, sizeof(char *) * bufsize);
            if (!tokens)
                return (NULL);
        }

        token = strtok(NULL, DELIM);
    }

    tokens[pos] = NULL;
    return (tokens);
}
