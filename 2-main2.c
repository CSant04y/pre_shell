#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
extern char **environ;
/**
  * fuck me
  */
char *_strcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i]= src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
int _strcmp(char *s1, char *s2)
{
	unsigned int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (0);
		++i;
	}
	return (1);
}
char *_getenv(char *name)
{
	char *env_val;
	char *name_cpy;
	unsigned int i = 0, len = 0;

	while (name[len] != '\0')
		len++;
	name_cpy = malloc((sizeof(char) * len) + 1);
	if (!name_cpy)
		return (NULL);
	_strcpy(name_cpy, name, len);
	env_val = strtok(environ[i], "=");
	while (environ[i])
	{
		if (_strcmp(env_val, name_cpy))
		{
			env_val = strtok(NULL, "\n");
			free(name_cpy);
			return (env_val);
		}
		++i;
		env_val = strtok(environ[i], "=");
	}
	free(name_cpy);
	return (NULL);
}
int  main(void)
{
	char *buffer = NULL;
	ssize_t chars;
	size_t bufsize = 0;
	char *s;

	printf("prompt$ ");
	while ((chars = getline(&buffer, &bufsize, stdin)))
	{
		if (chars == EOF)
		{
			printf("EOF");
			return (0);
		}
		s = _getenv(buffer);
		printf("%s\n", s);
		buffer = NULL;
		bufsize = 0;
	}
	return (0);
}

