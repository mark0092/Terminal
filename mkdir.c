#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include "commands.h"

int lsh_mkdir(char **args) {
	if (mkdir(args[1], 0777) == -1) {
		fprintf(stderr, "can't create %s\n",args[1]);
		exit(EXIT_FAILURE);
	}
	return 1;
}