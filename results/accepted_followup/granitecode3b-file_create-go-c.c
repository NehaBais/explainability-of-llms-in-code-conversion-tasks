#include
#include <stdio.h>

void createFile(const char *filename) {
  FILE *file = fopen(filename, "w");
  if (file == NULL) {
    perror("Error opening file");
  }
  fclose(file);
}

void createDir(const char *dirname) {
  mkdir(dirname, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
}

int main() {
  const char *filename = "test.txt";
  createFile(filename);

  const char *dirname = "mkdir";
  createDir(dirname);

  return 0;
}