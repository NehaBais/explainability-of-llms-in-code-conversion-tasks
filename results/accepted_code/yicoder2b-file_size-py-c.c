#include <stdio.h>
#include <unistd.h>

int main() {
  long size1 = 0, size2 = 0;

  /* File "input.txt" */
  struct stat st;
  if (stat("input.txt", &st) == 0) {
    size1 = st.st_size;
  } else {
    printf("Failed to get size of 'input.txt'\n");
    return -1;
  }

  /* /File "input.txt" */
  if (stat("/input.txt", &st) == 0) {
    size2 = st.st_size;
  } else {
    printf("Failed to get size of '/input.txt'\n");
    return -1;
  }

  /* Printing sizes */
  printf("Size of 'input.txt': %ld bytes\n", size1);
  printf("/Size of '/input.txt': %ld bytes\n", size2);

  return 0;
}