#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  char *files[] = {"input.txt", "docs", "/input.txt",
                   "/docs"}; // Define the files to check
  for (int i = 0; i < sizeof(files) / sizeof(char *); i++) {
    struct stat fileInfo;
    if (stat(files[i], &fileInfo) ==
        0) { // Get information about the file/directory
      if (S_ISDIR(fileInfo.st_mode)) { // Check if it is a directory
        printf("%s is a directory.\n", files[i]);
      } else { // Else it must be a regular file
        printf("%s is a file.\n", files[i]);
      }
    } else { // If stat failed (file doesn't exist) print an error message.
      perror(files[i]);
    }
  }
}