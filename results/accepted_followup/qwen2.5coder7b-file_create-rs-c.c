#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h> // Include this for mkdir declaration
#include <unistd.h>

#define FILE_NAME "output.txt"
#define DIR_NAME "docs"

void create_files_and_dirs(const char *path) {
  const char *full_path_to_file = NULL;
  const char *full_path_to_dir = NULL;

  full_path_to_file = malloc(strlen(path) + strlen(FILE_NAME) + 2);
  if (full_path_to_file == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    exit(1);
  }
  sprintf(full_path_to_file, "%s/%s", path, FILE_NAME);

  full_path_to_dir = malloc(strlen(path) + strlen(DIR_NAME) + 2);
  if (full_path_to_dir == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    free((void *)full_path_to_file);
    exit(1);
  }
  sprintf(full_path_to_dir, "%s/%s", path, DIR_NAME);

  if (mkdir(full_path_to_dir, 0755) != 0) {
    perror("Error creating directory");
    free((void *)full_path_to_file);
    free((void *)full_path_to_dir);
    exit(1);
  }

  FILE *fp = fopen(full_path_to_file, "w");
  if (fp == NULL) {
    perror("Error creating file");
    free((void *)full_path_to_file);
    free((void *)full_path_to_dir);
    exit(1);
  }
  fclose(fp);

  free((void *)full_path_to_file);
  free((void *)full_path_to_dir);
}

int main() {
  char cwd[1024];
  if (getcwd(cwd, sizeof(cwd)) == NULL) {
    perror("Error getting current working directory");
    exit(1);
  }
  create_files_and_dirs(cwd);

  char root_path[] = "/";
  create_files_and_dirs(root_path);

  return 0;
}