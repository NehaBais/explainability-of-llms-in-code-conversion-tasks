#include <errno.h> // For error handling
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;
  char separator = '/'; // This might differ based on the platform/OS (It is '/'
                        // for Unix-like OS and '\' for Windows)

  // Create file "output.txt" in current working directory
  if ((fp = fopen("output.txt", "w")) == NULL) {
    printf("Error opening the file: %s\n", strerror(errno));
    exit(-1); // Exit program with error status
  } else {
    fclose(fp); // Close file pointer
  }

  // Create empty directory "docs" in current working directory
  if (mkdir("docs", 0777) == -1) {
    printf("Error creating the directory: %s\n", strerror(errno));
    exit(-1); // Exit program with error status
  }

  // Create file "output.txt" in root directory
  if ((fp = fopen((char[]){separator, 'o', 'u', 't', 'p', 'u', 't', '.', 't',
                           'x', 't', '\0'},
                  "w")) == NULL) {
    printf("Error opening the file in root: %s\n", strerror(errno));
    exit(-1); // Exit program with error status
  } else {
    fclose(fp); // Close file pointer
  }

  // Create empty directory "docs" in root directory
  if (mkdir((char[]){separator, 'd', 'o', 'c', 's', '\0'}, 0777) == -1) {
    printf("Error creating the directory in root: %s\n", strerror(errno));
    exit(-1); // Exit program with error status
  }

  return (0);
}