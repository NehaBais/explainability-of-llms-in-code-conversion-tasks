#include <stdio.h>

int main(void) {
  if (mkdirp("/path/to/directory")) { // replace "/path/to/directory" with the
                                      // directory you want to create
    printf("Failed to create directories\n");
    return 1;
  } else {
    printf("Directories created successfully\n");
    return 0;
  }
}