#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main(void) {
  int ret = 0;

  /* Create the directory */
  ret = mkdir("C:/parent/test", S_IRWXU | S_IRWXG | S_IROTH);

  if (ret == -1) {
    fprintf(stderr, "Failed to create directory: %s\n", strerror(errno));
  } else {
    printf("Directory created successfully.\n");
  }

  return 0;
}