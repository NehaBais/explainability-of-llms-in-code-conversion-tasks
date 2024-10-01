#include <stdio.h>
#include <sys/stat.h>

int main() {
  struct stat st;

  // Get size of 'input.txt' in the current working directory
  if (stat("input.txt", &st) == 0)
    printf("Size of input.txt in current dir: %ld bytes\n", st.st_size);
  else
    perror("Error getting file size");

  // Get size of 'input.txt' in the root directory
  if (stat("/input.txt", &st) == 0)
    printf("Size of input.txt in root: %ld bytes\n", st.st_size);
  else
    perror("Error getting file size");

  return 0;
}