#include <stdio.h>
#include <unistd.h>
struct stat; // Forward declaration
int main(void) {
  struct stat st;
  if (stat("input.txt", &st) != 0) {
    printf("File doesn't exist.\n");
    return -1;
  }
  printf("%ld bytes\n", (long)st.st_size);

  if (stat("/input.txt", &st) != 0) {
    printf("File in root directory doesn't exist.\n");
    return -2;
  }
  printf("%ld bytes\n", (long)st.st_size);
  return 0;
}