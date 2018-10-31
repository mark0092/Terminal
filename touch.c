#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <utime.h>
#include "commands.h"

int lsh_touch(char **args) {
	if (args[1] == NULL) {
		fprintf(stderr, "lsh: expected argument to \"utime\"\n");
		exit(EXIT_FAILURE);
	}

	if (args[2] == NULL) {
		if (utime(args[1], NULL) != 0) {
			fprintf(stderr, "lsh: \"touch\" falled \n");
			exit(EXIT_FAILURE);
		}
	}
	return 1;
}