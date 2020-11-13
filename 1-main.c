#include <stdio.h>
#include <unistd.h>
/**
  * main - main
  * https://c-for-dummies.com/blog/?p=1112
  * Return: 0
  */
int  main(void)
{
	char buffer[32];
	char *b = buffer;
	size_t characters;

	printf("prompt$ ");
	characters = getline(&b, &bufsize, stdin);
	printf("%zu characters were read.\n", characters);
	printf("you typed: '%s'\n", buffer);
	return (0);
}
