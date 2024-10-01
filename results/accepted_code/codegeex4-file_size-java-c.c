#include <stdio.h>
#include <sys/stat.h>

int main() {
  struct stat bufA;
  struct stat bufB;

  // Get info for the input.txt file in the current working directory
  if (stat("input.txt", &bufA) == 0)
    printf("%lu B\n", (unsigned long)bufA.st_size);
  else
    perror("Error getting size of file");

  // Get info for the input.txt file in the root directory
  if (stat("/input.txt", &bufB) == 0)
    printf("%lu B\n", (unsigned long)bufB.st_size);
  else
    perror("Error getting size of file");

  return 0;
}