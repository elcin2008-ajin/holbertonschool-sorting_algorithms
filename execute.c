#include "shell.h"

void execute_command(char **args)
{
    pid_t pid;
    int status;

    if (!args[0])
        return;

    pid = fork();
    if (pid == 0)
    {
        if (execvp(args[0], args) == -1)
            perror("Error");
        exit(EXIT_FAILURE);
    }
    else if (pid < 0)
    {
        perror("Fork failed");
    }
    else
    {
        wait(&status);
    }
}
