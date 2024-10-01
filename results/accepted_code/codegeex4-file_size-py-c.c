#include <stdio.h>
#include <sys/stat.h>

int main() {
  struct stat st;

  // Get size of file in the current working directory.
  if (stat("input.txt", &st) == 0)
    printf("Size of input.txt in current working directory: %ld bytes\n",
           st.st_size);
  else
    perror("Error getting file size");

  // Get size of file in root directory.
  if (stat("/input.txt", &st) == 0)
    printf("Size of /input.txt in the root directory: %ld bytes\n", st.st_size);
  else
    perror("Error getting file size");

  return 0;
}