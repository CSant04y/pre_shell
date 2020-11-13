#include <stdio.h>
#include <unistd.h>
/**
  * main - Write a program that prints all the arguments, without using ac
  * Return: 0
  */
int main(__attribute__((unused)) int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("arg%d: %s", i, av[i]);
		printf("\n");
		i++;
	}
	printf("last one");
	return (0);
}
