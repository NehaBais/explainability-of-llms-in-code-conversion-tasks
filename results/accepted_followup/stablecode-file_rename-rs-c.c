#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {

  char err[] = "File move error";

  // rename file in the current working directory
  if (rename("input.txt", "output.txt")) {
    printf("File moved successfully.\n");
  } else {
    perror(err);
  }

  // rename directory in the current working directory
  if (rename("docs", "mydocs")) {
    printf("Directory renamed successfully.\n");
  } else {
    perror(err);
  }

  // rename file in the root directory
  char *root_dir = "/";
  char input_file[50] = "input.txt";
  char output_file[50] = "output.txt";
  char docs_dir[50] = "docs";
  char mydocs_dir[50] = "mydocs";

  snprintf(err, sizeof err, "File move error"));

  // concatenate file names with root directory
  snprintf(input_file, sizeof input_file, "%s%s", root_dir, input_file));
  snprintf(output_file, sizeof output_file, "%s%s", root_dir, output_file));
  snprintf(docs_dir, sizeof docs_dir, "%s%s", root_dir, docs_dir));
  snprintf(mydocs_dir, sizeof mydocs_dir, "%s%s", root_dir, mydocs_dir));

  // rename file in the root directory
  if (rename(input_file, output_file)) {
    printf("File moved successfully.\n");
  } else {
    perror(err);
  }

  // rename directory in the root directory
  if (rename(docs_dir, mydocs_dir)) {
    printf("Directory renamed successfully.\n");
  } else {
    perror(err);
  }

  return 0;
}