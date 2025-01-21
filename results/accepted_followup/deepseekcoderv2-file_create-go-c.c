#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h> // Include this header for mkdir
#include <unistd.h>   // Include this header for getcwd and mkdir

void createFile(const char *fn) {
  FILE *f = fopen(fn, "w");
  if (f == NULL) {
    perror("Error creating file");
    return;
  }
  printf("file %s created!\n", fn);
  fclose(f);
}

void createDir(const char *dn) {
  int status = mkdir(dn, 0666);
  if (status == -1) {
    perror("Error creating directory");
    return;
  }
  printf("directory %s created!\n", dn);
}

int main() {
  char path[256];

  // Current working directory
  getcwd(path, sizeof(path));
  strcat(path, "/input.txt");
  createFile(path);

  // Root directory
  strcpy(path, "/input.txt");
  createFile(path);

  // Current working directory
  getcwd(path, sizeof(path));
  strcat(path, "/docs");
  createDir(path);

  // Root directory
  strcpy(path, "/docs");
  createDir(path);

  return 0;
}