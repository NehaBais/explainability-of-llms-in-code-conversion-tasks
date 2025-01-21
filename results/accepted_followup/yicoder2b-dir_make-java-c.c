#include <errno.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char *path = "C:/parent/test";

  /* create buffer large enough to accommodate path */
  char buffer[1024];
  strcpy(buffer, path);

  if (mkdir(buffer, 0777)) { // 0777 is equivalent to 777 in octal which creates
                             // a directory with full permissions.
    perror("Error creating directory\n"); // print error if fails to create
                                          // directory return 1 for failure
  }

  printf("Directory %s created successfully\n", buffer);

  return 0; // successful execution
}