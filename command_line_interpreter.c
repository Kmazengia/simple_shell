#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - fork & wait example
 *
 *  Return: Always 0.
 **/
int main(void)

{

  printf("Please enter a line:\n");

  char *line;
  line = (char *)malloc(1020 * sizeof(char));

  size_t len = 0;

  ssize_t lineSize = 0;

  lineSize = getline(&line, &len, stdin);

  printf("You entered %s, which has %zu chars.\n", line, lineSize -1);

  free(line);

  return 0;
	// based on the written command
	// run execve givenCommand
	//wait(till user type a command);
	//execute given command
	//repeat the above
}
