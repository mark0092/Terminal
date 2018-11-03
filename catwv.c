#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "commands.h"

int lsh_catwv(char **args) {
	FILE *rf;
	rf = fopen(args[1],"rw");
	if (rf == NULL) {
		fprintf(stderr, "can't open the \"%s\"\n",args[1]);
		exit(EXIT_FAILURE);
	}

	int c = fgetc(rf);
	while((c = fgetc(rf)) != EOF);
	rf--;
	if (fprintf(rf, "%s", args[2]) < 0) {
		fprintf(stderr, "can't write your message\n");
		exit(EXIT_FAILURE);
	}
	return 1;
}