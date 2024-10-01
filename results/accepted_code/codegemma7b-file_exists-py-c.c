#include <sys/stat.h>

int check_file_exists(const char *filename) {
  return (stat(filename, NULL) == 0);
}

int check_directory_exists(const char *dirname) {
  return (stat(dirname, NULL) == 0 && S_ISDIR(stat(dirname, NULL)->st_mode));
}

int main() {
  // Check for files and directories in the current working directory
  if (!check_file_exists("input.txt")) {
    printf("Error: input.txt does not exist.\n");
    return 1;
  }

  if (!check_directory_exists("docs")) {
    printf("Error: docs directory does not exist.\n");
    return 1;
  }

  // Check for files and directories in the root filesystem
  if (!check_file_exists("/input.txt")) {
    printf("Error: /input.txt does not exist.\n");
    return 1;
  }

  if (!check_directory_exists("/docs")) {
    printf("Error: /docs directory does not exist.\n");
    return 1;
  }

  printf("All files and directories exist.\n");
  return 0;
}