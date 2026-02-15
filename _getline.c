#include "shell.h"

#define BUFFER_SIZE 1024

char *_getline(void)
{
    static char buffer[BUFFER_SIZE];
    char *line;
    ssize_t r, i;

    r = read(STDIN_FILENO, buffer, BUFFER_SIZE - 1);
    if (r <= 0)
        return (NULL);

    buffer[r] = '\0';
    line = malloc(sizeof(char) * (r + 1));
    if (!line)
        return (NULL);

    for (i = 0; i < r; i++)
        line[i] = buffer[i];
    line[i] = '\0';

    return (line);
}
