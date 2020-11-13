#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
  * main - main
  * https://c-for-dummies.com/blog/?p=1112
  * https://www.geeksforgeeks.org/strtok-strtok_r-functions-c-examples/
  * Return: 0
  */
int  main(void)
{
	char buffer[32];
	char *b = buffer;
	size_t bufsize = 32;
	size_t characters;

	printf("prompt$ ");
	characters = getline(&b, &bufsize, stdin);
	printf("%zu characters were read.\n", characters);
	printf("you typed: '%s'\n", buffer);
	char* token = strtok(buffer, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
