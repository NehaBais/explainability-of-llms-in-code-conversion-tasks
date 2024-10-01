#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int create_directory(const char *path) {
  if (mkdir(path, 0777)) {
    fprintf(stderr, "Failed to create directory: %s\n", path);
    return -1;
  }

  return 0;
}

int main() {
  char path[1024];
  printf("Enter the path you want to create a directory for: ");
  scanf("%s", &path);

  if (create_directory(path)) {
    printf("Directory created successfully.\n");
  } else {
    printf("Failed to create directory.\n");
  }

  return 0;
}