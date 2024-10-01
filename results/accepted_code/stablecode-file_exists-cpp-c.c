#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>

void file_exists(const char *path) {
  struct stat st;

  if (stat(path, &st)) {
    printf("%s does not exist\n", path);
  } else {
    if (st.mode & S_IFDIR)) {
            printf("%s is a directory\n", path);
        }
    else {
      printf("%s exists with a file size of %ld bytes.\n", path, st.st_size);
    }
  }
}

int main() {
  file_exists("input.txt");
  file_exists("zero_length.txt");
  file_exists("docs/input.txt");
  file_exists("docs/zero_length.txt");

  return 0;
}