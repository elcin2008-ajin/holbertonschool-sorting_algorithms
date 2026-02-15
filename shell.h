#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define DELIM " \t\r\n"

char **parse_line(char *line);
void execute_command(char **args);
void free_args(char **args);
char *_getline(void);

#endif
