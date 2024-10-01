#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  char *input = "input.txt";
  char *output = "output.txt";
  char *docs = "docs";
  char *mydocs = "mydocs";

  if (rename(input, output) != 0) {
    perror("Error renaming input file");
    exit(EXIT_FAILURE);
  }

  if (rename(docs, mydocs) != 0) {
    perror("Error renaming docs directory");
    exit(EXIT_FAILURE);
  }

  char *root = getenv("ROOT");
  char *input_fullpath = NULL;
  char *output_fullpath = NULL;

  if (root == NULL) {
    printf("Error: ROOT environment variable not set\n");
    exit(EXIT_FAILURE);
  } else {
    input_fullpath = malloc(strlen(root) + strlen(input) + 2);
    output_fullpath = malloc(strlen(root) + strlen(output) + 2);

    strcpy(input_fullpath, root);
    strcat(input_fullpath, "/");
    strcat(input_fullpath, input);

    strcpy(output_fullpath, root);
    strcat(output_fullpath, "/");
    strcat(output_fullpath, output);
  }

  if (rename(input_fullpath, output_fullpath) != 0) {
    perror("Error renaming input file in the filesystem root");
    exit(EXIT_FAILURE);
  }

  free(input_fullpath);
  free(output_fullpath);

  return 0;
}