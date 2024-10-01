#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main() {
  struct stat st;

  // Verify the size of a file called input.txt for a file in the current
  // working directory
  if (stat("input.txt", &st) == 0)
    printf("Size of 'input.txt' = %ld bytes\n", st.st_size);
  else
    perror("Error on stat(): ");

  // Verify the size of a file called input.txt in root directory
  if (stat("/root/input.txt", &st) == 0)
    printf("Size of '/root/input.txt' = %ld bytes\n", st.st_size);
  else
    perror("Error on stat(): ");

  return 0;
}