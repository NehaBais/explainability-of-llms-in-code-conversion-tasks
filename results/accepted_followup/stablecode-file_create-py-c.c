#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#define MAX_PATH PATH_MAX
#endif

void create(const char *directory) {
  char fullPath[MAX_PATH];

  snprintf(fullPath, sizeof(fullPath), "%s/output.txt", directory);
    FILE * outputFile = fopen(fullPath, "w"));
    if (!outputFile) {
      perror("Unable to open file");
      exit(1);
    }

    snprintf(fullPath, sizeof(fullPath), "%s/docs", directory);
    mkdir(fullPath, 0777);
    if (errno != 0) {
      perror("Error while creating directory");
      exit(1);
    }

    fclose(outputFile);
}

int main() {
  create(".");
  create("/");
  return 0;
}