#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "commands.h"

int lsh_rm(char **args) {
	if (args[1] == NULL) {
		fprintf(stderr, "lsh: expected argument to \"rm\"\n");
		exit(EXIT_FAILURE);
	}
	if (remove(args[1]) != 0) {
		fprintf(stderr, "lsh: \"rm\" failed\n");
		exit(EXIT_FAILURE);
	}
	return 1;
}