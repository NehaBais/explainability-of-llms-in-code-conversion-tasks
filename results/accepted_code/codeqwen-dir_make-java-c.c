#include <stdio.h>
#include <sys/stat.h>

int main() {
  mode_t mode =
      S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH; // Directory permission mode
  const char *path = "C:/parent/test";       // Path to the directory

  if (mkdir(path, mode) == -1 && errno != EEXIST) {
    perror("Error creating directory");
    return 1;
  } else if (errno == EEXIST) {
    printf("Directory already exists.\n");
  } else {
    printf("Directory created successfully.\n");
  }

  return 0;
}