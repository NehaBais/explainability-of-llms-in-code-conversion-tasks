The equivalent code in C would look like this:

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "Usage: %s filename\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  FILE *file = fopen(argv[1], "rb");
  if (file == NULL) {
    perror("Error opening file");
    exit(EXIT_FAILURE);
  }

  fseek(file, 0, SEEK_END);
  long size = ftell(file);
  fclose(file);

  printf("Size of %s is %ld bytes\n", argv[1], size);

  return EXIT_SUCCESS;
}
```

This C code reads the file using `fopen`, then calls `ftell` to get its size. The result is printed to stdout and program exits with a success status.
