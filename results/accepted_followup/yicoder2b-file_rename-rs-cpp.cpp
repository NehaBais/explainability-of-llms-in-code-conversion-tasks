#include <cstdio>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int errno;

void rename_files(const char *old_name, const char *new_name) {
  if (rename(old_name, new_name) == 0) {
    printf("File renamed successfully\n");
  } else {
    fprintf(stderr, "Failed to rename file: %s\n", strerror(errno));
  }
}

int main() {
  rename_files("input.txt", "output.txt");
  struct stat st;
  if (stat("docs", &st) == 0 && S_ISDIR(st.st_mode)) {
    rename_files("docs", "mydocs");
  }
  return 0;
}