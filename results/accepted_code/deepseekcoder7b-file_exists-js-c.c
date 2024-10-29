#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void file_exists(char *filename) {
  struct stat buffer;
  int exist = stat(filename, &buffer);
  if (exist == 0)
    printf("File %s exists.\n", filename);
  else
    perror("Error: File does not exist.");
}

void directory_exists(char *dirname) {
  DIR *dir = opendir(dirname);
  if (dir) {
    printf("Directory %s exists.\n", dirname);
    closedir(dir);
  } else if (ENOENT == errno) {
    perror("Error: Directory does not exist.");
  } else {
    perror("Error: opendir");
  }
}

int main() {
  file_exists("input.txt");
  directory_exists("docs");
  // You can replace '/' with your root filesystem path
  file_exists("/input.txt");
  directory_exists("/docs");
  return 0;
}