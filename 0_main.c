#include <stdio.h>
#include <unistd.h>
/**
  * main - Write a program that prints the PID of the parent process
  * https://www.knowprogram.com/c-programming/c-program-to-get-process-id-and-parent-process-id/
  * echo $$ is parent process id bc its of the shell
  * Return: 0
  */
int main()
{
	printf("Process ID: %d\n", getpid());
	printf("Parent Process ID: %d\n", getppid());
	return (0);
}
