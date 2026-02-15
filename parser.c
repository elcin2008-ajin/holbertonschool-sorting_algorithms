#include "shell.h"

/**
 * parse_line - split input into arguments
 * @line: input string
 * Return: array of strings
 */

char **parse_line(char *line)
{
	int bufsize = 64, position = 0;
	char **tokens = malloc(sizeof(char *) * bufsize);
	char *token;

	if (!tokens)
		return (NULL);

	token = strtok(line, DELIM);
	while (token != NULL)
	{
		tokens[position++] = token;

		if (position >= bufsize)
		{
			bufsize += 64;
			tokens = realloc(tokens, sizeof(char *) * bufsize);
			if (!tokens)
				return (NULL);
		}

		token = strtok(NULL, DELIM);
	}

	tokens[position] = NULL;
	return (tokens);
}
