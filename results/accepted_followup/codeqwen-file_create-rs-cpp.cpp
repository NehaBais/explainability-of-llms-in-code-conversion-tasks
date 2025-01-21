#include <cerrno>
#include <cstdio>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

void create(const char *root) {
  char file_name[20] = "output.txt";
  char dir_name[6] = "docs";
  int result;

  // concatenate root directory path with the file name
  snprintf(file_name, sizeof(file_name), "%s%s", root, file_name);
  result = open(file_name, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
  if (result == -1) {
    perror("Error creating file");
    exit(EXIT_FAILURE);
  }
  close(result);

  // concatenate root directory path with the dir name
  snprintf(dir_name, sizeof(dir_name), "%s%s", root, dir_name);
  result = mkdir(dir_name, S_IRUSR | S_IWUSR | S_IXUSR);
  if (result == -1) {
    perror("Error creating directory");
    exit(EXIT_FAILURE);
  }
}

int main() {
  create(".");
  create("/");

  return 0;
}