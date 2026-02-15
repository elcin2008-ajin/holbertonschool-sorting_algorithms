int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char **args;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);

		read = getline(&line, &len, stdin);
		if (read == -1)
			break;

		args = parse_line(line);
		if (args == NULL)
			continue;

		if (args[0] != NULL && strcmp(args[0], "exit") == 0)
		{
			free_args(args);
			break;
		}

		execute_command(args);
		free_args(args);
	}

	free(line);
	return (0);
}
