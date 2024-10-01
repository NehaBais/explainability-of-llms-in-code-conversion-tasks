#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void fct(int err) {
  if (err != 0) {
    perror("Error");
  }
}

int main() {
  // Create an empty file in the current directory
  if (open("output.txt", O_CREAT | O_EXCL, S_IRUSR | S_IWUSR) < 0) {
    fct(1);
  }
  // Create an empty file in the root directory
  if (open("/output.txt", O_CREAT | O_EXCL, S_IRUSR | S_IWUSR) < 0) {
    fct(2);
  }

  // Create a new directory in the current directory
  if (mkdir("docs", S_IRUSR | S_IWUSR | S_IXUSR) == -1) {
    fct(3);
  }
  // Create a new directory in the root directory
  if (mkdir("/docs", S_IRUSR | S_IWUSR | S_IXUSR) == -1) {
    fct(4);
  }

  return 0;
}