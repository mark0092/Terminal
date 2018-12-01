#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "commands.h"

int lsh_catwv(char **args) {
	lsh_cat(args);

	FILE *rf;
	rf = fopen(args[1],"a+");
	if (fprintf(rf, "%s", args[2]) < 0) {
		fprintf(stderr, "can't write your message\n");
		exit(EXIT_FAILURE);
	}
	fclose(rf);
	return 1;
}