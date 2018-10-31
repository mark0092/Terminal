#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "commands.h"

int lsh_cd(char **args) {
  if (args[1] == NULL) {
    fprintf(stderr, "lsh: expected argument to \"cd\"\n");
    exit(EXIT_FAILURE);
  }
  if (chdir(args[1]) != 0) {
    perror("lsh");
  }
  return 1;
}