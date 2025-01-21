#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void check_file_and_directory(const char *file_or_dir, const char *path) {
  struct stat path_stat;

  // Check if the file/directory exists
  if (access(path, F_OK) == 0) {
    printf("File/Directory '%s' exists.\n", path);

    // Get information about the file or directory
    if (stat(path, &path_stat) == 0) {
      if (S_ISREG(path_stat.st_mode)) {
        printf("'%s' is a regular file.\n", path);
      } else if (S_ISDIR(path_stat.st_mode)) {
        printf("'%s' is a directory.\n", path);
      }
    } else {
      perror("stat");
    }
  } else {
    printf("File/Directory '%s' does not exist.\n", path);
  }
}

int main() {
  check_file_and_directory("input.txt",
                           "./input.txt"); // Current working directory
  check_file_and_directory("/input.txt", "/input.txt"); // Filesystem root

  check_file_and_directory("docs", "./docs"); // Current working directory
  check_file_and_directory("/docs", "/docs"); // Filesystem root

  return 0;
}