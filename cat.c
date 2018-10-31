#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "commands.h"

int lsh_cat(char **args) {
	FILE *rf;
	rf = fopen(args[1],"r");
	if (rf == NULL) {
		fprintf(stderr, "can't open the \"%s\"\n",args[1]);
		exit(EXIT_FAILURE);
	}

	int c = fgetc(rf);
	while((c = fgetc(rf)) != EOF) {
		printf("%c", c);
	}
	close (rf);
	printf("\n");
	return 1;
}