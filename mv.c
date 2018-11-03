#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "commands.h"

int lsh_mv(char **args) {
	FILE *ifp, *ofp;
	if (args[1] == NULL || args[2] == NULL) {
		fprintf(stderr, "lack of arguments for function \"mv\"\n");
		exit(EXIT_FAILURE);
	}
	if ((ifp = fopen(args[1], "r")) == NULL || (ofp = fopen(args[2], "w")) == NULL) {
		fprintf(stderr, "open failure\n");
		exit(EXIT_FAILURE);
	}
	int c;
 
    while ((c = getc(ifp)) != EOF)
        putc(c, ofp);

    putc(c, ofp);
    fclose(ifp);
    fclose(ofp);
    return 1;
}