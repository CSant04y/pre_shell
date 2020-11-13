#include <unistd.h>
#include <stdio.h>

extern char **environ;
/**
  *
  */
int main(__attribute__ ((unused))int ac,__attribute__ ((unused)) char **av, char **env)
{
	printf("%p environ\n", *environ);
	printf("%p env\n", *env);
	return (0);
}
