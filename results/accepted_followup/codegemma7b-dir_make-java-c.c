#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  // Specify the directory path
  const char *dir_path = "C:/parent/test";

  // Create the directory and any missing parents
  if (mkdir(dir_path, 0755) == 0) {
    printf("Directory successfully created\n");
  } else {
    perror("mkdir");
  }

  return 0;
}