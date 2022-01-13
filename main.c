#include "holberton.h"
/**
 * main - Funcion main.
 *
 *Return: return (0).
 */

int main(void)
{
	char *token[103];
	int var1;
	char *var2 = NULL;
	size_t var3 = 0;
	char PATH[MAX_ARGS];
	char HOME[MAX_ARGS];
	char PWD[MAX_ARGS];

	while (1)
	{
		signal(SIGINT, libre);
		if (isatty(STDIN_FILENO))
		{
			getcwd(PWD, MAX_ARGS);
			strcpy(PATH, getenv("PATH"));
			printf("~%s> ", PWD);
			strcpy(HOME, PWD);
		}
		var1 = getline(&var2, &var3, stdin);
		if (var1 == EOF)
		{
			free(var2);
			if (isatty(STDIN_FILENO) != 0)
			write(STDOUT_FILENO, "\n", 1);
			return (0);
		}
	espacio(var2, token);
	compr_avanz(token, var2);
	}
	free(var2);
	return (0);
}
