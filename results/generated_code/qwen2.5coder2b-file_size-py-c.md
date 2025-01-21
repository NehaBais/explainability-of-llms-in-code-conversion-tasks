```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  // Get size of the file 'input.txt' in the current working directory
  long current_directory_size = lseek(0, 0, SEEK_END);
  if (current_directory_size == -1) {
    perror("Error getting size of current directory");
    return EXIT_FAILURE;
  }

  // Get size of the file 'input.txt' in the root directory
  long root_directory_size = lseek(lseek(1, 0, SEEK_SET), 0, SEEK_END);
  if (root_directory_size == -1) {
    perror("Error getting size of root directory");
    return EXIT_FAILURE;
  }

  printf("Size of 'input.txt' in current working directory: %ld bytes\n", current_directory_size);
  printf("Size of 'input.txt' in root directory: %ld bytes\n", root_directory_size);

  return EXIT_SUCCESS;
}
```
