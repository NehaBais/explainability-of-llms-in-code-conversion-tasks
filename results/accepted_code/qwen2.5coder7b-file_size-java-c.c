#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
  struct stat fileAStat;
  char *fileAPath = "input.txt";

  if (stat(fileAPath, &fileAStat) == 0) {
    printf("%s size: %ld bytes\n", fileAPath, fileAStat.st_size);
  } else {
    perror("Error getting file size");
  }

  struct stat fileBStat;
  char *fileBPath = "/input.txt";

  if (stat(fileBPath, &fileBStat) == 0) {
    printf("%s size: %ld bytes\n", fileBPath, fileBStat.st_size);
  } else {
    perror("Error getting file size");
  }

  return 0;
}