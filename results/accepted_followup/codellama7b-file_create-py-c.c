#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void create(char *directory) {
  char *filename = "output.txt";
  FILE *fp;
  struct stat sb;

  // Create a new file with write permissions and the correct permissions for
  // the file
  if ((fp = fopen(directory, filename)) == NULL) {
    perror("fopen");
    return;
  }
  chmod(fp, S_IRUSR | S_IWUSR);

  // Create a new directory for the output file
  if (mkdir(directory, 0755) < 0) {
    perror("mkdir");
    return;
  }
}

int main() {
  create(".", "output.txt"); // current working directory
  create("/", "docs");       // root directory
  return 0;
}