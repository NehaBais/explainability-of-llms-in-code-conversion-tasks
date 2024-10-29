#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  FILE *file;

  // create "output.txt" in the current directory
  file = fopen("output.txt", "w");
  if (file == NULL) {
    printf("Could not open/create output.txt\n");
    exit(1);
  } else {
    fclose(file);
  }

  // create "output.txt" in the root directory, usually requires super user
  // rights
  file = fopen("/output.txt", "w");
  if (file == NULL) {
    printf("Could not open/create /output.txt\n");
    exit(1);
  } else {
    fclose(file);
  }

  // create directory "docs" in the current directory
  if (mkdir("docs", 0755) == -1) {
    printf("Could not create docs\n");
    exit(1);
  }

  // create directory "docs" in root directory, usually requires super user
  // rights
  if (mkdir("/docs", 0755) == -1) {
    printf("Could not create /docs\n");
    exit(1);
  }

  return <｜begin▁of▁sentence｜>
      EXIT_SUCCESS; // Replace s with the correct status code, usually
                    // EXIT_SUCCESS is good.
}