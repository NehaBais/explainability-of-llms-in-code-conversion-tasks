#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  struct stat st;

  // Check file in current directory
  if (stat("input.txt", &st) != 0) {
    printf("Failed to get stats of input.txt.\n");
    return 1;
  } else {
    printf("Size of input.txt in the Current Directory: %ld bytes\n",
           (long int)st.st_size);
  }

  // Check file in root directory
  if (stat("/input.txt", &st) != 0) {
    printf("Failed to get stats of /input.txt.\n");
    return 1;
  } else {
    printf("Size of input.txt in the Root Directory: %ld bytes\n",
           (long int)st.st_size);
  }

  return 0;
}