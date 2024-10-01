#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
  struct stat st;

  // get size of the file input.txt in current directory
  if (stat("input.txt", &st) == 0) {
    printf("Size of file input.txt in current directory: %ld bytes\n",
           (long)st.st_size);
  } else {
    printf("Error in getting size of file input.txt in current directory\n");
  }

  // get size of the file /input.txt
  if (stat("/input.txt", &st) == 0) {
    printf("Size of file /input.txt : %ld bytes\n", (long)st.st_size);
  } else {
    printf("Error in getting size of file /input.txt \n");
  }

  return 0;
}